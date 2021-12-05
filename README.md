# Page_Replacement_Algorithm_OS
Code for Different types of Page replacement algorithm 
Refernces: https://www.geeksforgeeks.org/page-replacement-algorithms-in-operating-systems/ 

In an operating system that uses paging for memory management, a page replacement algorithm is needed to decide which page needs to be replaced when new page comes in. 

Page Fault – A page fault happens when a running program accesses a memory page that is mapped into the virtual address space, but not loaded in physical memory. 
Since actual physical memory is much smaller than virtual memory, page faults happen. In case of page fault, Operating System might have to replace one of the existing pages with the newly needed page. Different page replacement algorithms suggest different ways to decide which page to replace. The target for all algorithms is to reduce the number of page faults. 
Page Replacement Algorithms : 

1. First In First Out (FIFO) – 
This is the simplest page replacement algorithm. In this algorithm, the operating system keeps track of all pages in the memory in a queue, the oldest page is in the front of the queue. When a page needs to be replaced page in the front of the queue is selected for removal.  
Example-1Consider page reference string 1, 3, 0, 3, 5, 6 with 3 page frames.Find number of page faults.  
              Initially all slots are empty, so when 1, 3, 0 came they are allocated to the empty slots —> 3 Page Faults. 
              when 3 comes, it is already in  memory so —> 0 Page Faults. 
              Then 5 comes, it is not available in  memory so it replaces the oldest page slot i.e 1. —>1 Page Fault. 
              6 comes, it is also not available in memory so it replaces the oldest page slot i.e 3 —>1 Page Fault. 
              Finally when 3 come it is not available so it replaces 0 1 page fault
        
