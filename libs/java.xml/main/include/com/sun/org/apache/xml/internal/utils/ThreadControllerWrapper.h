#ifndef _com_sun_org_apache_xml_internal_utils_ThreadControllerWrapper_h_
#define _com_sun_org_apache_xml_internal_utils_ThreadControllerWrapper_h_
//$ class com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class ThreadControllerWrapper$ThreadController;
						}
					}
				}
			}
		}
	}
}
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

class $import ThreadControllerWrapper : public ::java::lang::Object {
	$class(ThreadControllerWrapper, 0, ::java::lang::Object)
public:
	ThreadControllerWrapper();
	void init$();
	static $Thread* runThread(::java::lang::Runnable* runnable, int32_t priority);
	static void waitThread($Thread* worker, ::java::lang::Runnable* task);
	static ::com::sun::org::apache::xml::internal::utils::ThreadControllerWrapper$ThreadController* m_tpool;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_ThreadControllerWrapper_h_