#include <javax/tools/DocumentationTool$Location.h>

#include <java/lang/Enum.h>
#include <javax/tools/DocumentationTool$1.h>
#include <javax/tools/DocumentationTool.h>
#include <jcpp.h>

#undef DOCLET_PATH
#undef DOCUMENTATION_OUTPUT
#undef TAGLET_PATH

using $DocumentationTool$LocationArray = $Array<::javax::tools::DocumentationTool$Location>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentationTool$1 = ::javax::tools::DocumentationTool$1;

namespace javax {
	namespace tools {

$FieldInfo _DocumentationTool$Location_FieldInfo_[] = {
	{"DOCUMENTATION_OUTPUT", "Ljavax/tools/DocumentationTool$Location;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocumentationTool$Location, DOCUMENTATION_OUTPUT)},
	{"DOCLET_PATH", "Ljavax/tools/DocumentationTool$Location;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocumentationTool$Location, DOCLET_PATH)},
	{"TAGLET_PATH", "Ljavax/tools/DocumentationTool$Location;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocumentationTool$Location, TAGLET_PATH)},
	{"$VALUES", "[Ljavax/tools/DocumentationTool$Location;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DocumentationTool$Location, $VALUES)},
	{}
};

$MethodInfo _DocumentationTool$Location_MethodInfo_[] = {
	{"$values", "()[Ljavax/tools/DocumentationTool$Location;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DocumentationTool$Location, $values, $DocumentationTool$LocationArray*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(DocumentationTool$Location, init$, void, $String*, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentationTool$Location, getName, $String*)},
	{"isOutputLocation", "()Z", nullptr, $PUBLIC, $virtualMethod(DocumentationTool$Location, isOutputLocation, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljavax/tools/DocumentationTool$Location;", nullptr, $PUBLIC | $STATIC, $staticMethod(DocumentationTool$Location, valueOf, DocumentationTool$Location*, $String*)},
	{"values", "()[Ljavax/tools/DocumentationTool$Location;", nullptr, $PUBLIC | $STATIC, $staticMethod(DocumentationTool$Location, values, $DocumentationTool$LocationArray*)},
	{}
};

$InnerClassInfo _DocumentationTool$Location_InnerClassesInfo_[] = {
	{"javax.tools.DocumentationTool$Location", "javax.tools.DocumentationTool", "Location", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DocumentationTool$Location_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.tools.DocumentationTool$Location",
	"java.lang.Enum",
	"javax.tools.JavaFileManager$Location",
	_DocumentationTool$Location_FieldInfo_,
	_DocumentationTool$Location_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/tools/DocumentationTool$Location;>;Ljavax/tools/JavaFileManager$Location;",
	nullptr,
	_DocumentationTool$Location_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.DocumentationTool"
};

$Object* allocate$DocumentationTool$Location($Class* clazz) {
	return $of($alloc(DocumentationTool$Location));
}

$String* DocumentationTool$Location::toString() {
	 return this->$Enum::toString();
}

bool DocumentationTool$Location::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t DocumentationTool$Location::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* DocumentationTool$Location::clone() {
	 return this->$Enum::clone();
}

void DocumentationTool$Location::finalize() {
	this->$Enum::finalize();
}

DocumentationTool$Location* DocumentationTool$Location::DOCUMENTATION_OUTPUT = nullptr;
DocumentationTool$Location* DocumentationTool$Location::DOCLET_PATH = nullptr;
DocumentationTool$Location* DocumentationTool$Location::TAGLET_PATH = nullptr;
$DocumentationTool$LocationArray* DocumentationTool$Location::$VALUES = nullptr;

$DocumentationTool$LocationArray* DocumentationTool$Location::$values() {
	$init(DocumentationTool$Location);
	return $new($DocumentationTool$LocationArray, {
		DocumentationTool$Location::DOCUMENTATION_OUTPUT,
		DocumentationTool$Location::DOCLET_PATH,
		DocumentationTool$Location::TAGLET_PATH
	});
}

$DocumentationTool$LocationArray* DocumentationTool$Location::values() {
	$init(DocumentationTool$Location);
	return $cast($DocumentationTool$LocationArray, DocumentationTool$Location::$VALUES->clone());
}

DocumentationTool$Location* DocumentationTool$Location::valueOf($String* name) {
	$init(DocumentationTool$Location);
	return $cast(DocumentationTool$Location, $Enum::valueOf(DocumentationTool$Location::class$, name));
}

void DocumentationTool$Location::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$String* DocumentationTool$Location::getName() {
	return name();
}

bool DocumentationTool$Location::isOutputLocation() {
	$init($DocumentationTool$1);
	switch ($nc($DocumentationTool$1::$SwitchMap$javax$tools$DocumentationTool$Location)->get((this)->ordinal())) {
	case 1:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void clinit$DocumentationTool$Location($Class* class$) {
	$assignStatic(DocumentationTool$Location::DOCUMENTATION_OUTPUT, $new(DocumentationTool$Location, "DOCUMENTATION_OUTPUT"_s, 0));
	$assignStatic(DocumentationTool$Location::DOCLET_PATH, $new(DocumentationTool$Location, "DOCLET_PATH"_s, 1));
	$assignStatic(DocumentationTool$Location::TAGLET_PATH, $new(DocumentationTool$Location, "TAGLET_PATH"_s, 2));
	$assignStatic(DocumentationTool$Location::$VALUES, DocumentationTool$Location::$values());
}

DocumentationTool$Location::DocumentationTool$Location() {
}

$Class* DocumentationTool$Location::load$($String* name, bool initialize) {
	$loadClass(DocumentationTool$Location, name, initialize, &_DocumentationTool$Location_ClassInfo_, clinit$DocumentationTool$Location, allocate$DocumentationTool$Location);
	return class$;
}

$Class* DocumentationTool$Location::class$ = nullptr;

	} // tools
} // javax