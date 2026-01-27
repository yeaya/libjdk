#ifndef _com_sun_org_apache_xpath_internal_compiler_OpMapVector_h_
#define _com_sun_org_apache_xpath_internal_compiler_OpMapVector_h_
//$ class com.sun.org.apache.xpath.internal.compiler.OpMapVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class $export OpMapVector : public ::java::lang::Object {
	$class(OpMapVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OpMapVector();
	void init$(int32_t blocksize, int32_t increaseSize, int32_t lengthPos);
	int32_t elementAt(int32_t i);
	void setElementAt(int32_t value, int32_t index);
	void setToSize(int32_t size);
	int32_t m_blocksize = 0;
	$ints* m_map = nullptr;
	int32_t m_lengthPos = 0;
	int32_t m_mapSize = 0;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_compiler_OpMapVector_h_