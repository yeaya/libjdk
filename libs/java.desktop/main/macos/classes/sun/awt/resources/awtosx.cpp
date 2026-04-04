#include <sun/awt/resources/awtosx.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awtosx::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtosx::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"<"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			u"⌨ +"_s
		}),
		$$new($ObjectArray, {
			"AWT.alt"_s,
			u"⌥"_s
		}),
		$$new($ObjectArray, {
			"AWT.altGraph"_s,
			u"⌥"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			"&"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			"*"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			"@"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			"`"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			"\\"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			u"⌫"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			"["_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			"]"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			u"⎋"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			u"⇪"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"^"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			u"⌧"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			"]"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			","_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			u"⌃"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			u"⌨ ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			u"⌦"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			u"⌨ /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			u"↓"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			u"↘"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			u"⏎"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			"="_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			u"⎋"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			u"€"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			"!"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			">"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			u"↖"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			u"¡"_s
		}),
		$$new($ObjectArray, {
			"AWT.left"_s,
			u"←"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			"("_s
		}),
		$$new($ObjectArray, {
			"AWT.meta"_s,
			u"⌘"_s
		}),
		$$new($ObjectArray, {
			"AWT.minus"_s,
			"-"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			u"⌨ *"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			"#"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			u"⌨"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			"["_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"."_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			u"⇟"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			u"⇞"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			"+"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			u"⎙"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			"\'"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			"\""_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			u"→"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			")"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			";"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			u"⌨ ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			u"⌨ ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			u"⇧"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			"/"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			u"␣"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			u"⌨ -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			u"⇥"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"_"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			u"↑"_s
		})
	});
}

awtosx::awtosx() {
}

$Class* awtosx::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awtosx, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awtosx, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awtosx",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awtosx, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awtosx);
	});
	return class$;
}

$Class* awtosx::class$ = nullptr;

		} // resources
	} // awt
} // sun