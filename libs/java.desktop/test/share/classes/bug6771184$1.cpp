#include <bug6771184$1.h>
#include <bug6771184$1$1.h>
#include <bug6771184.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Highlighter.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $intArray2 = $Array<int32_t, 2>;
using $bug6771184$1$1 = ::bug6771184$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextArea = ::javax::swing::JTextArea;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Highlighter = ::javax::swing::text::Highlighter;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;

void bug6771184$1::init$() {
}

void bug6771184$1::run() {
	$useLocalObjectStack();
	$var($JTextArea, textArea, $new($JTextArea, "Tested string"_s));
	$var($Highlighter, highlighter, textArea->getHighlighter());
	$var($Highlighter$HighlightPainter, myPainter, $new($bug6771184$1$1, this));
	$var($intArray2, negativeTestedData, $new($intArray2, {
		$$new($ints, {
			50,
			0
		}),
		$$new($ints, {
			-1,
			1
		}),
		$$new($ints, {
			-5,
			-4
		}),
		$$new($ints, {
			$Integer::MAX_VALUE,
			$Integer::MIN_VALUE
		}),
		$$new($ints, {
			$Integer::MIN_VALUE,
			$Integer::MAX_VALUE
		}),
		$$new($ints, {
			$Integer::MIN_VALUE,
			$Integer::MIN_VALUE
		})
	}));
	{
		$var($intArray2, arr$, negativeTestedData);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($ints, data, arr$->get(i$));
			{
				try {
					$nc(highlighter)->addHighlight($nc(data)->get(0), $nc(data)->get(1), myPainter);
					$throwNew($RuntimeException, $$str({"Method addHighlight() does not throw BadLocationException for ("_s, $$str(data->get(0)), ", "_s, $$str(data->get(1)), ") "_s}));
				} catch ($BadLocationException& e) {
				}
				$var($Object, objRef, nullptr);
				try {
					$assign(objRef, $nc(highlighter)->addHighlight(0, 1, myPainter));
				} catch ($BadLocationException& e) {
					$throwNew($RuntimeException, "highlighter.addHighlight(0, 1, myPainter) throws exception"_s, e);
				}
				try {
					$nc(highlighter)->changeHighlight(objRef, $nc(data)->get(0), $nc(data)->get(1));
					$throwNew($RuntimeException, $$str({"Method changeHighlight() does not throw BadLocationException for ("_s, $$str(data->get(0)), ", "_s, $$str(data->get(1)), ") "_s}));
				} catch ($BadLocationException& e) {
				}
			}
		}
	}
}

bug6771184$1::bug6771184$1() {
}

$Class* bug6771184$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6771184$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6771184$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6771184",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6771184$1", nullptr, nullptr, 0},
		{"bug6771184$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6771184$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6771184"
	};
	$loadClass(bug6771184$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6771184$1);
	});
	return class$;
}

$Class* bug6771184$1::class$ = nullptr;