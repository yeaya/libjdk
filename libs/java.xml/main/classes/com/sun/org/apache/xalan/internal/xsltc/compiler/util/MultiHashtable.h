#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MultiHashtable_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MultiHashtable_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MultiHashtable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class MultiHashtable : public ::java::lang::Object {
	$class(MultiHashtable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MultiHashtable();
	void init$();
	static ::java::util::Set* lambda$put$0(Object$* k);
	void makeUnmodifiable();
	$Object* maps(Object$* key, Object$* value);
	::java::util::Set* put(Object$* key, Object$* value);
	static const int64_t serialVersionUID = (int64_t)0xAAA118DA36CD2D5C;
	::java::util::Map* map = nullptr;
	bool modifiable = false;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MultiHashtable_h_