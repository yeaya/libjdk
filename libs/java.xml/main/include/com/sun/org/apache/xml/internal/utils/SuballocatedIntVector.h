#ifndef _com_sun_org_apache_xml_internal_utils_SuballocatedIntVector_h_
#define _com_sun_org_apache_xml_internal_utils_SuballocatedIntVector_h_
//$ class com.sun.org.apache.xml.internal.utils.SuballocatedIntVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUMBLOCKS_DEFAULT")
#undef NUMBLOCKS_DEFAULT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import SuballocatedIntVector : public ::java::lang::Object {
	$class(SuballocatedIntVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SuballocatedIntVector();
	void init$();
	void init$(int32_t blocksize, int32_t numblocks);
	void init$(int32_t blocksize);
	virtual void addElement(int32_t value);
	void addElements(int32_t value, int32_t numberOfElements);
	void addElements(int32_t numberOfElements);
	bool contains(int32_t s);
	virtual int32_t elementAt(int32_t i);
	$Array<int32_t, 2>* getMap();
	$ints* getMap0();
	virtual int32_t indexOf(int32_t elem, int32_t index);
	virtual int32_t indexOf(int32_t elem);
	void insertElementAt(int32_t value, int32_t at);
	int32_t lastIndexOf(int32_t elem);
	virtual void removeAllElements();
	bool removeElement(int32_t s);
	void removeElementAt(int32_t at);
	virtual void setElementAt(int32_t value, int32_t at);
	virtual void setSize(int32_t sz);
	virtual int32_t size();
	int32_t m_blocksize = 0;
	int32_t m_SHIFT = 0;
	int32_t m_MASK = 0;
	static const int32_t NUMBLOCKS_DEFAULT = 32;
	int32_t m_numblocks = 0;
	$Array<int32_t, 2>* m_map = nullptr;
	int32_t m_firstFree = 0;
	$ints* m_map0 = nullptr;
	$ints* m_buildCache = nullptr;
	int32_t m_buildCacheStartIndex = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NUMBLOCKS_DEFAULT")

#endif // _com_sun_org_apache_xml_internal_utils_SuballocatedIntVector_h_