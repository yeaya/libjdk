#ifndef _sun_util_logging_resources_logging_it_h_
#define _sun_util_logging_resources_logging_it_h_
//$ class sun.util.logging.resources.logging_it
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace util {
		namespace logging {
			namespace resources {

class logging_it : public ::java::util::ListResourceBundle {
	$class(logging_it, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	logging_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // resources
		} // logging
	} // util
} // sun

#endif // _sun_util_logging_resources_logging_it_h_