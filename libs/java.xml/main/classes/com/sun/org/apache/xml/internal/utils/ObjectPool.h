#ifndef _com_sun_org_apache_xml_internal_utils_ObjectPool_h_
#define _com_sun_org_apache_xml_internal_utils_ObjectPool_h_
//$ class com.sun.org.apache.xml.internal.utils.ObjectPool
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export ObjectPool : public ::java::io::Serializable {
	$class(ObjectPool, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ObjectPool();
	void init$($Class* type);
	void init$($String* className);
	void init$($Class* type, int32_t size);
	void init$();
	virtual void freeInstance(Object$* obj);
	virtual $Object* getInstance();
	virtual $Object* getInstanceIfFree();
	static const int64_t serialVersionUID = (int64_t)0x89C6622EDFDC5A3D;
	$Class* objectType = nullptr;
	::java::util::List* freeStack = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_ObjectPool_h_