#ifndef _sun_util_logging_resources_logging_ko_h_
#define _sun_util_logging_resources_logging_ko_h_
//$ class sun.util.logging.resources.logging_ko
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace util {
		namespace logging {
			namespace resources {

class logging_ko : public ::java::util::ListResourceBundle {
	$class(logging_ko, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	logging_ko();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // resources
		} // logging
	} // util
} // sun

#endif // _sun_util_logging_resources_logging_ko_h_