// VirtualMemory.cpp

#include "VirtualMemory.h"


VirtualMemory::VirtualMemory()
{
	
	for (int i=0 ; i<NUMOFFRAMES ; i++)
	{
		freeFramesList.push(PhysMem::Access().GetFrame(i));
	}
	
	pageTable.VirtualMemory = this; //todo: find the right name for "VirtualMemory" from page table.
	
}

//*******************************************************************************************************//

int* VirtualMemory::GetFreeFrame()
{
	if (freeFramesList.empty){
		return NULL;
	}
		
	int* framePtr = freeFramesList.front(); //FIFO for the queue
	freeFramesList.pop();
	memset(framePtr, 0, PAGESIZE);
	return framePtr;
}

//*******************************************************************************************************//

void VirtualMemory::ReleaseFrame(int* framePointer)
{
	//todo: verify legal input?
	freeFramesList.push(framePointer);
	return;
}

OurPointer OurMalloc(size_t size) { 
/*allocates a pointer */

	if (allocated + size >= (VIRTMEMSIZE >> 2)) {
		throw "We are limited to 4294967296 bytes with our 32 bit address size";
	}
	
	OurPointer ptr(allocated, this);
	allocated += size;
	return ptr;
}

int* VirtualMemory::GetPage(unsigned int adr) 
{ 
	return pageTable.GetPage(adr); 
}

//todo: what about swap device ?













