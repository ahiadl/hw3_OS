//PageDirectoryEntry.h

#ifndef PageDirectoryEntry_H
#define PageDirectoryEntry_H

#include "PageTableEntry.h"

//10 bits => 2^10 entrys => 1024
#define PTE_NUM 1024

class PageDirectoryEntry
{
	public:
		
		PageDirectoryEntry();
		
		~PageDirectoryEntry();
		
		PageTableEntry* get_table_address();
		
		bool is_valid(); 
		
		void set_valid(bool valid); 
		
	
		
	private:
		
		PageTableEntry* _PTE_ARR[PTE_NUM];
		bool _valid;
	
};
#endif
