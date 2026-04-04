#include <com/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef REMOVE_ALL
#undef REMOVE_FIRST_SPACE
#undef RETAIN_ALL

using $DocCommentParser$WhitespaceRetentionPolicyArray = $Array<::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

DocCommentParser$WhitespaceRetentionPolicy* DocCommentParser$WhitespaceRetentionPolicy::RETAIN_ALL = nullptr;
DocCommentParser$WhitespaceRetentionPolicy* DocCommentParser$WhitespaceRetentionPolicy::REMOVE_FIRST_SPACE = nullptr;
DocCommentParser$WhitespaceRetentionPolicy* DocCommentParser$WhitespaceRetentionPolicy::REMOVE_ALL = nullptr;
$DocCommentParser$WhitespaceRetentionPolicyArray* DocCommentParser$WhitespaceRetentionPolicy::$VALUES = nullptr;

$DocCommentParser$WhitespaceRetentionPolicyArray* DocCommentParser$WhitespaceRetentionPolicy::$values() {
	$init(DocCommentParser$WhitespaceRetentionPolicy);
	return $new($DocCommentParser$WhitespaceRetentionPolicyArray, {
		DocCommentParser$WhitespaceRetentionPolicy::RETAIN_ALL,
		DocCommentParser$WhitespaceRetentionPolicy::REMOVE_FIRST_SPACE,
		DocCommentParser$WhitespaceRetentionPolicy::REMOVE_ALL
	});
}

$DocCommentParser$WhitespaceRetentionPolicyArray* DocCommentParser$WhitespaceRetentionPolicy::values() {
	$init(DocCommentParser$WhitespaceRetentionPolicy);
	return $cast($DocCommentParser$WhitespaceRetentionPolicyArray, DocCommentParser$WhitespaceRetentionPolicy::$VALUES->clone());
}

DocCommentParser$WhitespaceRetentionPolicy* DocCommentParser$WhitespaceRetentionPolicy::valueOf($String* name) {
	$init(DocCommentParser$WhitespaceRetentionPolicy);
	return $cast(DocCommentParser$WhitespaceRetentionPolicy, $Enum::valueOf(DocCommentParser$WhitespaceRetentionPolicy::class$, name));
}

void DocCommentParser$WhitespaceRetentionPolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void DocCommentParser$WhitespaceRetentionPolicy::clinit$($Class* clazz) {
	$assignStatic(DocCommentParser$WhitespaceRetentionPolicy::RETAIN_ALL, $new(DocCommentParser$WhitespaceRetentionPolicy, "RETAIN_ALL"_s, 0));
	$assignStatic(DocCommentParser$WhitespaceRetentionPolicy::REMOVE_FIRST_SPACE, $new(DocCommentParser$WhitespaceRetentionPolicy, "REMOVE_FIRST_SPACE"_s, 1));
	$assignStatic(DocCommentParser$WhitespaceRetentionPolicy::REMOVE_ALL, $new(DocCommentParser$WhitespaceRetentionPolicy, "REMOVE_ALL"_s, 2));
	$assignStatic(DocCommentParser$WhitespaceRetentionPolicy::$VALUES, DocCommentParser$WhitespaceRetentionPolicy::$values());
}

DocCommentParser$WhitespaceRetentionPolicy::DocCommentParser$WhitespaceRetentionPolicy() {
}

$Class* DocCommentParser$WhitespaceRetentionPolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RETAIN_ALL", "Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$WhitespaceRetentionPolicy, RETAIN_ALL)},
		{"REMOVE_FIRST_SPACE", "Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$WhitespaceRetentionPolicy, REMOVE_FIRST_SPACE)},
		{"REMOVE_ALL", "Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$WhitespaceRetentionPolicy, REMOVE_ALL)},
		{"$VALUES", "[Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DocCommentParser$WhitespaceRetentionPolicy, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DocCommentParser$WhitespaceRetentionPolicy, $values, $DocCommentParser$WhitespaceRetentionPolicyArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(DocCommentParser$WhitespaceRetentionPolicy, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;", nullptr, $PUBLIC | $STATIC, $staticMethod(DocCommentParser$WhitespaceRetentionPolicy, valueOf, DocCommentParser$WhitespaceRetentionPolicy*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;", nullptr, $PUBLIC | $STATIC, $staticMethod(DocCommentParser$WhitespaceRetentionPolicy, values, $DocCommentParser$WhitespaceRetentionPolicyArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.DocCommentParser$WhitespaceRetentionPolicy", "com.sun.tools.javac.parser.DocCommentParser", "WhitespaceRetentionPolicy", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.parser.DocCommentParser$WhitespaceRetentionPolicy",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.DocCommentParser"
	};
	$loadClass(DocCommentParser$WhitespaceRetentionPolicy, name, initialize, &classInfo$$, DocCommentParser$WhitespaceRetentionPolicy::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DocCommentParser$WhitespaceRetentionPolicy));
	});
	return class$;
}

$Class* DocCommentParser$WhitespaceRetentionPolicy::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com