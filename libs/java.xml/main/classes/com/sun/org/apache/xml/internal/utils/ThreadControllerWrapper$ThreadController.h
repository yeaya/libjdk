#ifndef _com_sun_org_apache_xml_internal_utils_ThreadControllerWrapper$ThreadController_h_
#define _com_sun_org_apache_xml_internal_utils_ThreadControllerWrapper$ThreadController_h_
//$ class com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper$ThreadController
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export ThreadControllerWrapper$ThreadController : public ::java::lang::Object {
	$class(ThreadControllerWrapper$ThreadController, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ThreadControllerWrapper$ThreadController();
	void init$();
	virtual $Thread* run(::java::lang::Runnable* task, int32_t priority);
	virtual void waitThread($Thread* worker, ::java::lang::Runnable* task);
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_ThreadControllerWrapper$ThreadController_h_