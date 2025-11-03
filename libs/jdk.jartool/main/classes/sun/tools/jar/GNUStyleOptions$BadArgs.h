#ifndef _sun_tools_jar_GNUStyleOptions$BadArgs_h_
#define _sun_tools_jar_GNUStyleOptions$BadArgs_h_
//$ class sun.tools.jar.GNUStyleOptions$BadArgs
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace sun {
	namespace tools {
		namespace jar {

class GNUStyleOptions$BadArgs : public ::java::lang::Exception {
	$class(GNUStyleOptions$BadArgs, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	GNUStyleOptions$BadArgs();
	void init$($String* key, $String* arg);
	void init$($String* key);
	virtual ::sun::tools::jar::GNUStyleOptions$BadArgs* showUsage(bool b);
	static const int64_t serialVersionUID = (int64_t)0;
	bool showUsage$ = false;
	GNUStyleOptions$BadArgs(const GNUStyleOptions$BadArgs& e);
	virtual void throw$() override;
	inline GNUStyleOptions$BadArgs* operator ->() {
		return (GNUStyleOptions$BadArgs*)throwing$;
	}
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_GNUStyleOptions$BadArgs_h_