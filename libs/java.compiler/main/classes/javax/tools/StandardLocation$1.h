#ifndef _javax_tools_StandardLocation$1_h_
#define _javax_tools_StandardLocation$1_h_
//$ class javax.tools.StandardLocation$1
//$ extends javax.tools.JavaFileManager$Location

#include <javax/tools/JavaFileManager$Location.h>

namespace javax {
	namespace tools {

class StandardLocation$1 : public ::javax::tools::JavaFileManager$Location {
	$class(StandardLocation$1, $NO_CLASS_INIT, ::javax::tools::JavaFileManager$Location)
public:
	StandardLocation$1();
	void init$($String* val$name);
	virtual $String* getName() override;
	virtual bool isOutputLocation() override;
	$String* val$name = nullptr;
};

	} // tools
} // javax

#endif // _javax_tools_StandardLocation$1_h_