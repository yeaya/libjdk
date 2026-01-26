#include <javax/tools/JavaFileObject$Kind.h>

#include <java/lang/Enum.h>
#include <java/util/Objects.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef HTML
#undef OTHER
#undef SOURCE

using $JavaFileObject$KindArray = $Array<::javax::tools::JavaFileObject$Kind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace javax {
	namespace tools {

$FieldInfo _JavaFileObject$Kind_FieldInfo_[] = {
	{"SOURCE", "Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaFileObject$Kind, SOURCE)},
	{"CLASS", "Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaFileObject$Kind, CLASS)},
	{"HTML", "Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaFileObject$Kind, HTML)},
	{"OTHER", "Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaFileObject$Kind, OTHER)},
	{"$VALUES", "[Ljavax/tools/JavaFileObject$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaFileObject$Kind, $VALUES)},
	{"extension", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(JavaFileObject$Kind, extension)},
	{}
};

$MethodInfo _JavaFileObject$Kind_MethodInfo_[] = {
	{"$values", "()[Ljavax/tools/JavaFileObject$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavaFileObject$Kind, $values, $JavaFileObject$KindArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(JavaFileObject$Kind, init$, void, $String*, int32_t, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavaFileObject$Kind, valueOf, JavaFileObject$Kind*, $String*)},
	{"values", "()[Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavaFileObject$Kind, values, $JavaFileObject$KindArray*)},
	{}
};

$InnerClassInfo _JavaFileObject$Kind_InnerClassesInfo_[] = {
	{"javax.tools.JavaFileObject$Kind", "javax.tools.JavaFileObject", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavaFileObject$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.tools.JavaFileObject$Kind",
	"java.lang.Enum",
	nullptr,
	_JavaFileObject$Kind_FieldInfo_,
	_JavaFileObject$Kind_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/tools/JavaFileObject$Kind;>;",
	nullptr,
	_JavaFileObject$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.JavaFileObject"
};

$Object* allocate$JavaFileObject$Kind($Class* clazz) {
	return $of($alloc(JavaFileObject$Kind));
}

JavaFileObject$Kind* JavaFileObject$Kind::SOURCE = nullptr;
JavaFileObject$Kind* JavaFileObject$Kind::CLASS = nullptr;
JavaFileObject$Kind* JavaFileObject$Kind::HTML = nullptr;
JavaFileObject$Kind* JavaFileObject$Kind::OTHER = nullptr;
$JavaFileObject$KindArray* JavaFileObject$Kind::$VALUES = nullptr;

$JavaFileObject$KindArray* JavaFileObject$Kind::$values() {
	$init(JavaFileObject$Kind);
	return $new($JavaFileObject$KindArray, {
		JavaFileObject$Kind::SOURCE,
		JavaFileObject$Kind::CLASS,
		JavaFileObject$Kind::HTML,
		JavaFileObject$Kind::OTHER
	});
}

$JavaFileObject$KindArray* JavaFileObject$Kind::values() {
	$init(JavaFileObject$Kind);
	return $cast($JavaFileObject$KindArray, JavaFileObject$Kind::$VALUES->clone());
}

JavaFileObject$Kind* JavaFileObject$Kind::valueOf($String* name) {
	$init(JavaFileObject$Kind);
	return $cast(JavaFileObject$Kind, $Enum::valueOf(JavaFileObject$Kind::class$, name));
}

void JavaFileObject$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $String* extension) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, extension, $cast($String, $Objects::requireNonNull(extension)));
}

void clinit$JavaFileObject$Kind($Class* class$) {
	$assignStatic(JavaFileObject$Kind::SOURCE, $new(JavaFileObject$Kind, "SOURCE"_s, 0, ".java"_s));
	$assignStatic(JavaFileObject$Kind::CLASS, $new(JavaFileObject$Kind, "CLASS"_s, 1, ".class"_s));
	$assignStatic(JavaFileObject$Kind::HTML, $new(JavaFileObject$Kind, "HTML"_s, 2, ".html"_s));
	$assignStatic(JavaFileObject$Kind::OTHER, $new(JavaFileObject$Kind, "OTHER"_s, 3, ""_s));
	$assignStatic(JavaFileObject$Kind::$VALUES, JavaFileObject$Kind::$values());
}

JavaFileObject$Kind::JavaFileObject$Kind() {
}

$Class* JavaFileObject$Kind::load$($String* name, bool initialize) {
	$loadClass(JavaFileObject$Kind, name, initialize, &_JavaFileObject$Kind_ClassInfo_, clinit$JavaFileObject$Kind, allocate$JavaFileObject$Kind);
	return class$;
}

$Class* JavaFileObject$Kind::class$ = nullptr;

	} // tools
} // javax