//PageTableEntry.cpp
#include "PageTableEntry.h"

PageTableEntry::PageTableEntry()
{
	_adr = NULL;
	_valid = false;
}

//*******************************************************************************************************//

int* PageTableEntry::get_page_address() 
{
	return 	_adr;
}

//*******************************************************************************************************//

void PageTableEntry::set_page_address(int* adr) {
	_adr = adr;
}

//*******************************************************************************************************//

bool PageTableEntry::is_valid()
{
    return _valid;
}

//*******************************************************************************************************//

void PageTableEntry::set_valid(bool valid)
{
    _valid = valid;
}