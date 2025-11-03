#include <javax/tools/DocumentationTool$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/DocumentationTool$Location.h>
#include <javax/tools/DocumentationTool.h>
#include <jcpp.h>

#undef DOCUMENTATION_OUTPUT

using $DocumentationTool$LocationArray = $Array<::javax::tools::DocumentationTool$Location>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DocumentationTool = ::javax::tools::DocumentationTool;
using $DocumentationTool$Location = ::javax::tools::DocumentationTool$Location;

namespace javax {
	namespace tools {

$FieldInfo _DocumentationTool$1_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$DocumentationTool$Location", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocumentationTool$1, $SwitchMap$javax$tools$DocumentationTool$Location)},
	{}
};

$EnclosingMethodInfo _DocumentationTool$1_EnclosingMethodInfo_ = {
	"javax.tools.DocumentationTool",
	nullptr,
	nullptr
};

$InnerClassInfo _DocumentationTool$1_InnerClassesInfo_[] = {
	{"javax.tools.DocumentationTool$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DocumentationTool$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.tools.DocumentationTool$1",
	"java.lang.Object",
	nullptr,
	_DocumentationTool$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DocumentationTool$1_EnclosingMethodInfo_,
	_DocumentationTool$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.DocumentationTool"
};

$Object* allocate$DocumentationTool$1($Class* clazz) {
	return $of($alloc(DocumentationTool$1));
}

$ints* DocumentationTool$1::$SwitchMap$javax$tools$DocumentationTool$Location = nullptr;

void clinit$DocumentationTool$1($Class* class$) {
	$assignStatic(DocumentationTool$1::$SwitchMap$javax$tools$DocumentationTool$Location, $new($ints, $($DocumentationTool$Location::values())->length));
	{
		try {
			$nc(DocumentationTool$1::$SwitchMap$javax$tools$DocumentationTool$Location)->set($DocumentationTool$Location::DOCUMENTATION_OUTPUT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DocumentationTool$1::DocumentationTool$1() {
}

$Class* DocumentationTool$1::load$($String* name, bool initialize) {
	$loadClass(DocumentationTool$1, name, initialize, &_DocumentationTool$1_ClassInfo_, clinit$DocumentationTool$1, allocate$DocumentationTool$1);
	return class$;
}

$Class* DocumentationTool$1::class$ = nullptr;

	} // tools
} // javax