#ifndef _sun_tools_jar_resources_jar_es_h_
#define _sun_tools_jar_resources_jar_es_h_
//$ class sun.tools.jar.resources.jar_es
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace tools {
		namespace jar {
			namespace resources {

class jar_es : public ::java::util::ListResourceBundle {
	$class(jar_es, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	jar_es();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // resources
		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_resources_jar_es_h_