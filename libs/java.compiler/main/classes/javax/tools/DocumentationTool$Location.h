#ifndef _javax_tools_DocumentationTool$Location_h_
#define _javax_tools_DocumentationTool$Location_h_
//$ class javax.tools.DocumentationTool$Location
//$ extends java.lang.Enum
//$ implements javax.tools.JavaFileManager$Location

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <javax/tools/JavaFileManager$Location.h>

#pragma push_macro("DOCLET_PATH")
#undef DOCLET_PATH
#pragma push_macro("DOCUMENTATION_OUTPUT")
#undef DOCUMENTATION_OUTPUT
#pragma push_macro("TAGLET_PATH")
#undef TAGLET_PATH

namespace javax {
	namespace tools {

class $export DocumentationTool$Location : public ::java::lang::Enum, public ::javax::tools::JavaFileManager$Location {
	$class(DocumentationTool$Location, 0, ::java::lang::Enum, ::javax::tools::JavaFileManager$Location)
public:
	DocumentationTool$Location();
	static $Array<::javax::tools::DocumentationTool$Location>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* getName() override;
	virtual bool isOutputLocation() override;
	virtual $String* toString() override;
	static ::javax::tools::DocumentationTool$Location* valueOf($String* name);
	static $Array<::javax::tools::DocumentationTool$Location>* values();
	static ::javax::tools::DocumentationTool$Location* DOCUMENTATION_OUTPUT;
	static ::javax::tools::DocumentationTool$Location* DOCLET_PATH;
	static ::javax::tools::DocumentationTool$Location* TAGLET_PATH;
	static $Array<::javax::tools::DocumentationTool$Location>* $VALUES;
};

	} // tools
} // javax

#pragma pop_macro("DOCLET_PATH")
#pragma pop_macro("DOCUMENTATION_OUTPUT")
#pragma pop_macro("TAGLET_PATH")

#endif // _javax_tools_DocumentationTool$Location_h_