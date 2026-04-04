#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections$3.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections.h>
#include <jcpp.h>

#undef RETURN

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavadocFormatter$Sections = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

void JavadocFormatter$Sections$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavadocFormatter$Sections::init$($enum$name, $enum$ordinal);
}

bool JavadocFormatter$Sections$3::matches($DocTree* t) {
	$init($DocTree$Kind);
	return $nc(t)->getKind() == $DocTree$Kind::RETURN;
}

JavadocFormatter$Sections$3::JavadocFormatter$Sections$3() {
}

$Class* JavadocFormatter$Sections$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(JavadocFormatter$Sections$3, init$, void, $String*, int32_t)},
		{"matches", "(Lcom/sun/source/doctree/DocTree;)Z", nullptr, $PUBLIC, $virtualMethod(JavadocFormatter$Sections$3, matches, bool, $DocTree*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.shellsupport.doc.JavadocFormatter$Sections",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections", "jdk.internal.shellsupport.doc.JavadocFormatter", "Sections", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$3", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$3",
		"jdk.internal.shellsupport.doc.JavadocFormatter$Sections",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.shellsupport.doc.JavadocFormatter"
	};
	$loadClass(JavadocFormatter$Sections$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavadocFormatter$Sections$3));
	});
	return class$;
}

$Class* JavadocFormatter$Sections$3::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk