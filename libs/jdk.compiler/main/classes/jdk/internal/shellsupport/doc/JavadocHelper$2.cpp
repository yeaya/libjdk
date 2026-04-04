#include <jdk/internal/shellsupport/doc/JavadocHelper$2.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef CLASS
#undef CONSTRUCTOR
#undef DOC_COMMENT
#undef ENUM
#undef ENUM_CONSTANT
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INTERFACE
#undef LOCAL_VARIABLE
#undef METHOD
#undef PARAM
#undef PARAMETER
#undef RESOURCE_VARIABLE
#undef RETURN
#undef THROWS

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$ints* JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind = nullptr;
$ints* JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind = nullptr;

void JavadocHelper$2::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind, $new($ints, $($ElementKind::values())->length));
	{
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::ANNOTATION_TYPE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::ENUM->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::INTERFACE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::FIELD->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::ENUM_CONSTANT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::EXCEPTION_PARAMETER->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::LOCAL_VARIABLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::PARAMETER->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::RESOURCE_VARIABLE->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::CONSTRUCTOR->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::METHOD->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind, $new($ints, $($DocTree$Kind::values())->length));
	{
		try {
			JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::PARAM->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::THROWS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::RETURN->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::DOC_COMMENT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavadocHelper$2::JavadocHelper$2() {
}

$Class* JavadocHelper$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$lang$model$element$ElementKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavadocHelper$2, $SwitchMap$javax$lang$model$element$ElementKind)},
		{"$SwitchMap$com$sun$source$doctree$DocTree$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavadocHelper$2, $SwitchMap$com$sun$source$doctree$DocTree$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.shellsupport.doc.JavadocHelper",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.shellsupport.doc.JavadocHelper$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.shellsupport.doc.JavadocHelper$2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.shellsupport.doc.JavadocHelper"
	};
	$loadClass(JavadocHelper$2, name, initialize, &classInfo$$, JavadocHelper$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$2);
	});
	return class$;
}

$Class* JavadocHelper$2::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk