#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections.h>
#include <com/sun/source/doctree/DocTree.h>
#include <java/lang/Enum.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections$1.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections$2.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections$3.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections$4.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter.h>
#include <jcpp.h>

#undef PARAMS
#undef RETURNS
#undef THROWS
#undef TYPE_PARAMS

using $JavadocFormatter$SectionsArray = $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$Sections>;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavadocFormatter$Sections$1 = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections$1;
using $JavadocFormatter$Sections$2 = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections$2;
using $JavadocFormatter$Sections$3 = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections$3;
using $JavadocFormatter$Sections$4 = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections$4;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

JavadocFormatter$Sections* JavadocFormatter$Sections::TYPE_PARAMS = nullptr;
JavadocFormatter$Sections* JavadocFormatter$Sections::PARAMS = nullptr;
JavadocFormatter$Sections* JavadocFormatter$Sections::RETURNS = nullptr;
JavadocFormatter$Sections* JavadocFormatter$Sections::THROWS = nullptr;
$JavadocFormatter$SectionsArray* JavadocFormatter$Sections::$VALUES = nullptr;

$JavadocFormatter$SectionsArray* JavadocFormatter$Sections::$values() {
	$init(JavadocFormatter$Sections);
	return $new($JavadocFormatter$SectionsArray, {
		JavadocFormatter$Sections::TYPE_PARAMS,
		JavadocFormatter$Sections::PARAMS,
		JavadocFormatter$Sections::RETURNS,
		JavadocFormatter$Sections::THROWS
	});
}

$JavadocFormatter$SectionsArray* JavadocFormatter$Sections::values() {
	$init(JavadocFormatter$Sections);
	return $cast($JavadocFormatter$SectionsArray, JavadocFormatter$Sections::$VALUES->clone());
}

JavadocFormatter$Sections* JavadocFormatter$Sections::valueOf($String* name) {
	$init(JavadocFormatter$Sections);
	return $cast(JavadocFormatter$Sections, $Enum::valueOf(JavadocFormatter$Sections::class$, name));
}

void JavadocFormatter$Sections::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void JavadocFormatter$Sections::clinit$($Class* clazz) {
	$assignStatic(JavadocFormatter$Sections::TYPE_PARAMS, $new($JavadocFormatter$Sections$1, "TYPE_PARAMS"_s, 0));
	$assignStatic(JavadocFormatter$Sections::PARAMS, $new($JavadocFormatter$Sections$2, "PARAMS"_s, 1));
	$assignStatic(JavadocFormatter$Sections::RETURNS, $new($JavadocFormatter$Sections$3, "RETURNS"_s, 2));
	$assignStatic(JavadocFormatter$Sections::THROWS, $new($JavadocFormatter$Sections$4, "THROWS"_s, 3));
	$assignStatic(JavadocFormatter$Sections::$VALUES, JavadocFormatter$Sections::$values());
}

JavadocFormatter$Sections::JavadocFormatter$Sections() {
}

$Class* JavadocFormatter$Sections::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE_PARAMS", "Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$Sections, TYPE_PARAMS)},
		{"PARAMS", "Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$Sections, PARAMS)},
		{"RETURNS", "Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$Sections, RETURNS)},
		{"THROWS", "Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$Sections, THROWS)},
		{"$VALUES", "[Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavadocFormatter$Sections, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocFormatter$Sections, $values, $JavadocFormatter$SectionsArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(JavadocFormatter$Sections, init$, void, $String*, int32_t)},
		{"matches", "(Lcom/sun/source/doctree/DocTree;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavadocFormatter$Sections, matches, bool, $DocTree*)},
		{"valueOf", "(Ljava/lang/String;)Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavadocFormatter$Sections, valueOf, JavadocFormatter$Sections*, $String*)},
		{"values", "()[Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavadocFormatter$Sections, values, $JavadocFormatter$SectionsArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections", "jdk.internal.shellsupport.doc.JavadocFormatter", "Sections", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$4", nullptr, nullptr, $FINAL | $ENUM},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$3", nullptr, nullptr, $FINAL | $ENUM},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$2", nullptr, nullptr, $FINAL | $ENUM},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT | $ENUM,
		"jdk.internal.shellsupport.doc.JavadocFormatter$Sections",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.shellsupport.doc.JavadocFormatter"
	};
	$loadClass(JavadocFormatter$Sections, name, initialize, &classInfo$$, JavadocFormatter$Sections::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavadocFormatter$Sections));
	});
	return class$;
}

$Class* JavadocFormatter$Sections::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk