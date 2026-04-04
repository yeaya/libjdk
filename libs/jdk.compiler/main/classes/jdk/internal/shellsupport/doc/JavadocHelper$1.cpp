#include <jdk/internal/shellsupport/doc/JavadocHelper$1.h>
#include <javax/lang/model/element/Element.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::lang::model::element::Element;
using $JavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

void JavadocHelper$1::init$() {
	$JavadocHelper::init$();
}

$String* JavadocHelper$1::getResolvedDocComment($Element* forElement) {
	return nullptr;
}

$Element* JavadocHelper$1::getSourceElement($Element* forElement) {
	return forElement;
}

void JavadocHelper$1::close() {
}

JavadocHelper$1::JavadocHelper$1() {
}

$Class* JavadocHelper$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JavadocHelper$1, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$1, close, void), "java.io.IOException"},
		{"getResolvedDocComment", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$1, getResolvedDocComment, $String*, $Element*), "java.io.IOException"},
		{"getSourceElement", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$1, getSourceElement, $Element*, $Element*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.shellsupport.doc.JavadocHelper",
		"create",
		"(Lcom/sun/source/util/JavacTask;Ljava/util/Collection;)Ljdk/internal/shellsupport/doc/JavadocHelper;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.shellsupport.doc.JavadocHelper$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.shellsupport.doc.JavadocHelper$1",
		"jdk.internal.shellsupport.doc.JavadocHelper",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.shellsupport.doc.JavadocHelper"
	};
	$loadClass(JavadocHelper$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$1);
	});
	return class$;
}

$Class* JavadocHelper$1::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk