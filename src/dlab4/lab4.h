#ifndef LAB4_H
#define LAB4_H

template class <elemType>
class arrayList {

	protected:
		elemType *list;
		int length, maxSize;

	public:
		arrayList(int);
		arrayList(const arrayList<elemType>&);
		bool
		isEmpty() const;
		bool
		isFull() const;
		int
		listSize() const;
		int
		maxListSize() const;
		void
		print() const;
		void
		insertEnd(const elemType&);
		void
		removeEnd();
		void
		insertAt(int, const elemType&);
		void
		removeAt(int);
		int
		seqSearch(const elemType&) const;

#endif
