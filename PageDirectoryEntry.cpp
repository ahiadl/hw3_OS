//PageDirectoryEntry.cpp

#include "PageDirectoryEntry.h"


//*******************************************************************************************************//
PageDirectoryEntry::PageDirectoryEntry()
{
	_PTE_ARR = NEW PageTableEntry[PTE_NUM];
}

//*******************************************************************************************************//

PageDirectoryEntry::~PageDirectoryEntry()
{
	delete [] _PTE_ARR; //Q: need to free all the array element individualy  ?
	
}

//*******************************************************************************************************//
PageTableEntry* PageDirectoryEntry::get_table_address()
{
	return _PTE_ARR[];
}

//*******************************************************************************************************//
bool PageDirectoryEntry::is_valid()
{
	return _valid;
}

//*******************************************************************************************************//
void PageDirectoryEntry::set_valid(bool valid) 
{
	_valid = valid;
}










