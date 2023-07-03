#include "Memory.h"
#include <iostream>
#include "Memorey.h"
using namespace std;
afro::MemoryTracker afro::g_memoryTracker;

void* operator new (size_t size)
{
	void* p = malloc(size);
	afro::g_memoryTracker.Add(p, size);

	return p;
}

void operator delete(void* address, size_t size)
{
	afro::g_memoryTracker.Remove(address,size);
	free(address);
}

namespace afro 
{
	void MemoryTracker ::Add(void* address, size_t size) 
	{
		m_bytesAllocated += size;
		m_numAllocated++;
	}
	void MemoryTracker::Remove(void* address, size_t size)
	{
		m_bytesAllocated -= size;
		m_numAllocated--;
	}
	void MemoryTracker::DisplayInfo()
	{
		cout << "current bytes allocated: " << m_bytesAllocated << endl;
		cout << "current number allocations: " << m_numAllocated << endl;
	}
}