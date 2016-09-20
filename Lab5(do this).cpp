// all things needing to be done


//from SortedListLinked.h
template < class T >
NextNode<T>** SortedListLinked<T>::find(T* item)
{
   NextNode<T>* prev = NULL;
   NextNode<T>* curr = head;

   //DO THIS
   //loop to find the correct location to insert/remove item









   //could simply return prev and compute curr, but prev might be null
   //this way results in somewhat simpler code in add and remove
   NextNode<T>** nodes = new NextNode<T>*[2];
   nodes[0] = prev;
   nodes[1] = curr;

   return nodes;
} 
   NextNode<T>* node = new NextNode<T>(item);

   //special case: adding to an empty list
   if (sze == 0)
   {
      head = node;
      sze++;
      return;
   }

   NextNode<T>** nodes = find(item);
   NextNode<T>* prev = nodes[0];
   NextNode<T>* curr = nodes[1];
   delete[] nodes;

   //DO THIS
   //adding to the top of the list (check prev)
   if (           )
   {




   }
   else    //general add
   {




   }

   sze++;
}
template < class T >
void SortedListLinked<T>::remove(T* item)
{
   //special case: removing from an empty list
   if (sze == 0)
   {
      return;  //nothing to delete
   }

   NextNode<T>** nodes = find(item);
   NextNode<T>* prev = nodes[0];
   NextNode<T>* curr = nodes[1];
   delete[] nodes;

   //make sure that the item to be removed is actually in the list
   //if curr has run off of the end of the list, item is not there
   //if item and curr's item aren't equal, item is not there

   if (curr == NULL)
   {
      return;  //item not present
   }

   //this is how to use the function pointer
   int compare = (*compare_items) (item, curr->getItem());

   //determine whether the item to be removed is present
   if (                       )
   {
      return;  //item not present
   }

   //DO THIS
   //removing the top item (check prev)
   if (         )
   {




   }
   else  //general remove
   {




   }

   delete curr;
   sze--;
}



// from SortedListBoxDriver.cpp
void addCDs(ListArray<CD>* list, ListBox<CD>* lb)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS
   //iterate over and add the cds to the list box (use lb->addItem)




   delete iter;
}

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS  
   //iterate over and delete the cds




   delete iter;
}

int main(int argc, char* argv[])
{
   Gtk::Main kit(argc, argv);  //this must be first
   ListArray<CD>* cds = CD::readCDs("cds.txt");
   //DO THIS
   //create the sorted linked list (call it sorted_list)




















