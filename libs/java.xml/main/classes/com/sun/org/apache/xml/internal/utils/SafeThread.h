#ifndef _com_sun_org_apache_xml_internal_utils_SafeThread_h_
#define _com_sun_org_apache_xml_internal_utils_SafeThread_h_
//$ class com.sun.org.apache.xml.internal.utils.SafeThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class Runnable;
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export SafeThread : public ::java::lang::Thread {
	$class(SafeThread, 0, ::java::lang::Thread)
public:
	SafeThread();
	void init$(::java::lang::Runnable* target);
	void init$(::java::lang::Runnable* target, $String* name);
	void init$(::java::lang::ThreadGroup* group, ::java::lang::Runnable* target, $String* name);
	virtual void run() override;
	static $String* threadName();
	$volatile(bool) ran = false;
	static ::java::util::concurrent::atomic::AtomicInteger* threadNumber;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_SafeThread_h_