#include <com/sun/tools/javac/tree/DocTreeMaker$2.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef END_ELEMENT
#undef RETURN
#undef START_ELEMENT
#undef SUMMARY
#undef TEXT

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$ints* DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind = nullptr;

void DocTreeMaker$2::clinit$($Class* clazz) {
	$assignStatic(DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind, $new($ints, $($DocTree$Kind::values())->length));
	{
		try {
			DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::RETURN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::SUMMARY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::TEXT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::START_ELEMENT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind->set($DocTree$Kind::END_ELEMENT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DocTreeMaker$2::DocTreeMaker$2() {
}

$Class* DocTreeMaker$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$source$doctree$DocTree$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocTreeMaker$2, $SwitchMap$com$sun$source$doctree$DocTree$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.tree.DocTreeMaker",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DocTreeMaker$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.tree.DocTreeMaker$2",
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
		"com.sun.tools.javac.tree.DocTreeMaker"
	};
	$loadClass(DocTreeMaker$2, name, initialize, &classInfo$$, DocTreeMaker$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DocTreeMaker$2);
	});
	return class$;
}

$Class* DocTreeMaker$2::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com