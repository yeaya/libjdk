#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8$Cache$1_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8$Cache$1_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache$1
//$ extends java.util.LinkedHashMap

#include <java/util/LinkedHashMap.h>

namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class ConstantUtf8$Cache$1 : public ::java::util::LinkedHashMap {
	$class(ConstantUtf8$Cache$1, $NO_CLASS_INIT, ::java::util::LinkedHashMap)
public:
	ConstantUtf8$Cache$1();
	void init$(int32_t arg0, float arg1, bool arg2);
	virtual bool removeEldestEntry(::java::util::Map$Entry* eldest) override;
	static const int64_t serialVersionUID = (int64_t)0x89F126FC4724708A;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8$Cache$1_h_