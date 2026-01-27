#ifndef _com_sun_org_apache_xalan_internal_xsltc_util_IntegerArray_h_
#define _com_sun_org_apache_xalan_internal_xsltc_util_IntegerArray_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.util.IntegerArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace util {

class IntegerArray : public ::java::lang::Object {
	$class(IntegerArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntegerArray();
	void init$();
	void init$(int32_t size);
	void init$($ints* array);
	void add(int32_t value);
	void addNew(int32_t value);
	int32_t at(int32_t index);
	int32_t cardinality();
	void clear();
	virtual $Object* clone() override;
	void growArray(int32_t size);
	int32_t indexOf(int32_t n);
	int32_t last();
	void merge(::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* other);
	static int32_t partition($ints* array, int32_t p, int32_t r);
	void pop();
	void pop(int32_t n);
	int32_t popLast();
	void print(::java::io::PrintStream* out);
	static void quicksort($ints* array, int32_t p, int32_t r);
	void reverse();
	void set(int32_t index, int32_t value);
	void setLast(int32_t n);
	void sort();
	$ints* toIntArray();
	static const int32_t InitialSize = 32;
	$ints* _array = nullptr;
	int32_t _size = 0;
	int32_t _free = 0;
};

							} // util
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_util_IntegerArray_h_