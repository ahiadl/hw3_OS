//PageTableEntry.h

#ifndef PageTableEntry_H
#define PageTableEntry_H

#pragma once
class PageTableEntry
{
	public:
		PageTableEntry();
		
		int* get_page_address(); //Pointer to beginning of frame
		
		void set_page_address(int* adr); //Set the pointer to a frame
		
		bool is_valid(); //Returns whether the entry is valid
		
		void set_valid(bool valid); //Allows to set whether the entry is valid
		
	private:
	
		bool _valid;
		int* _adr;
};
#endif