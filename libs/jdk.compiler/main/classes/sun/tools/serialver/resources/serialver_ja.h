#ifndef _sun_tools_serialver_resources_serialver_ja_h_
#define _sun_tools_serialver_resources_serialver_ja_h_
//$ class sun.tools.serialver.resources.serialver_ja
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace tools {
		namespace serialver {
			namespace resources {

class serialver_ja : public ::java::util::ListResourceBundle {
	$class(serialver_ja, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	serialver_ja();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // resources
		} // serialver
	} // tools
} // sun

#endif // _sun_tools_serialver_resources_serialver_ja_h_