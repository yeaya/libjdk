#include <com/sun/tools/javac/tree/DocPretty$1.h>
#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/tools/javac/tree/DocPretty.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef DOUBLE
#undef EMPTY
#undef SINGLE
#undef UNQUOTED

using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
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

$ints* DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind = nullptr;

void DocPretty$1::clinit$($Class* clazz) {
	$assignStatic(DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind, $new($ints, $($AttributeTree$ValueKind::values())->length));
	{
		try {
			DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind->set($AttributeTree$ValueKind::EMPTY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind->set($AttributeTree$ValueKind::UNQUOTED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind->set($AttributeTree$ValueKind::SINGLE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind->set($AttributeTree$ValueKind::DOUBLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DocPretty$1::DocPretty$1() {
}

$Class* DocPretty$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocPretty$1, $SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.tree.DocPretty",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DocPretty$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.tree.DocPretty$1",
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
		"com.sun.tools.javac.tree.DocPretty"
	};
	$loadClass(DocPretty$1, name, initialize, &classInfo$$, DocPretty$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DocPretty$1);
	});
	return class$;
}

$Class* DocPretty$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com