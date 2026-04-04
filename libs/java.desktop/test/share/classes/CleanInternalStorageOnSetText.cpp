#include <CleanInternalStorageOnSetText.h>
#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/GapContent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StringContent.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $JPasswordField = ::javax::swing::JPasswordField;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $GapContent = ::javax::swing::text::GapContent;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $Segment = ::javax::swing::text::Segment;
using $StringContent = ::javax::swing::text::StringContent;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

class CleanInternalStorageOnSetText$$Lambda$lambda$main$0 : public $Runnable {
	$class(CleanInternalStorageOnSetText$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		CleanInternalStorageOnSetText::lambda$main$0();
	}
};
$Class* CleanInternalStorageOnSetText$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CleanInternalStorageOnSetText$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CleanInternalStorageOnSetText$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CleanInternalStorageOnSetText$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CleanInternalStorageOnSetText$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CleanInternalStorageOnSetText$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* CleanInternalStorageOnSetText$$Lambda$lambda$main$0::class$ = nullptr;

void CleanInternalStorageOnSetText::init$() {
}

void CleanInternalStorageOnSetText::main($StringArray* args) {
	$EventQueue::invokeAndWait($$new(CleanInternalStorageOnSetText$$Lambda$lambda$main$0));
}

void CleanInternalStorageOnSetText::testStorage(bool makeGap, $JPasswordField* pf) {
	test(pf, "123"_s, makeGap);
	test(pf, "1234567"_s, makeGap);
	test(pf, "1234567890"_s, makeGap);
	test(pf, $("1"_s->repeat(100)), makeGap);
	test(pf, "1234567890"_s, makeGap);
	test(pf, "1234567"_s, makeGap);
	test(pf, "123"_s, makeGap);
	test(pf, ""_s, makeGap);
}

void CleanInternalStorageOnSetText::test($JPasswordField* pf, $String* text, bool makeGap) {
	$useLocalObjectStack();
	$nc(pf)->setText(text);
	if (makeGap && $nc(text)->length() > 3) {
		try {
			$$nc(pf->getDocument())->remove(1, 2);
		} catch ($BadLocationException& e) {
			$throwNew($RuntimeException, e);
		}
	}
	$var($chars, internalArray, getInternalArray(pf));
	$var($ArrayList, segments, $new($ArrayList));
	if (makeGap) {
		$var($Document, doc, pf->getDocument());
		int32_t nleft = $nc(doc)->getLength();
		$var($Segment, sgm, $new($Segment));
		sgm->setPartialReturn(true);
		int32_t offs = 0;
		try {
			while (nleft > 0) {
				doc->getText(offs, nleft, sgm);
				segments->add(sgm);
				nleft -= sgm->count;
				offs += sgm->count;
			}
		} catch ($BadLocationException& e) {
			$throwNew($RuntimeException, e);
		}
	}
	$nc($System::err)->println($$str({"Before = "_s, $($Arrays::toString(internalArray))}));
	pf->setText(""_s);
	$System::err->println($$str({"After = "_s, $($Arrays::toString(internalArray))}));
	if (!makeGap) {
		$var($chars, arr$, internalArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			if (c != u'\0' && c != u'\n') {
				$throwNew($RuntimeException, $($Arrays::toString(internalArray)));
			}
		}
	} else {
		$var($Iterator, i$, segments->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Segment, sgm, $cast($Segment, i$->next()));
			for (int32_t i = $nc(sgm)->offset; i < sgm->count + sgm->offset; ++i) {
				char16_t c = $nc(sgm->array)->get(i);
				if (c != u'\0' && c != u'\n') {
					$throwNew($RuntimeException, $($Arrays::toString(sgm->array)));
				}
			}
		}
	}
}

$chars* CleanInternalStorageOnSetText::getInternalArray($JPasswordField* pf) {
	$useLocalObjectStack();
	$var($Document, doc, $nc(pf)->getDocument());
	int32_t nleft = $nc(doc)->getLength();
	$var($Segment, text, $new($Segment));
	int32_t offs = 0;
	text->setPartialReturn(true);
	try {
		doc->getText(offs, nleft, text);
	} catch ($BadLocationException& e) {
		$throwNew($RuntimeException, e);
	}
	return text->array;
}

void CleanInternalStorageOnSetText::lambda$main$0() {
	$useLocalObjectStack();
	testStorage(false, $$new($JPasswordField));
	testStorage(true, $$new($JPasswordField));
	$var($Document, document, $new($PlainDocument, $$new($StringContent)));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$assign(document, $new($PlainDocument, $$new($StringContent)));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
	$assign(document, $new($PlainDocument, $$new($GapContent)));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$assign(document, $new($PlainDocument, $$new($GapContent)));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$0, $new($StringContent));
	$assign(document, $cast($AbstractDocument, $new($HTMLDocument, var$0, $$new($StyleSheet))));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$1, $new($StringContent));
	$assign(document, $cast($AbstractDocument, $new($HTMLDocument, var$1, $$new($StyleSheet))));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$2, $new($GapContent));
	$assign(document, $cast($AbstractDocument, $new($HTMLDocument, var$2, $$new($StyleSheet))));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$3, $new($GapContent));
	$assign(document, $cast($AbstractDocument, $new($HTMLDocument, var$3, $$new($StyleSheet))));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
}

CleanInternalStorageOnSetText::CleanInternalStorageOnSetText() {
}

$Class* CleanInternalStorageOnSetText::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("CleanInternalStorageOnSetText$$Lambda$lambda$main$0")) {
			return CleanInternalStorageOnSetText$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CleanInternalStorageOnSetText, init$, void)},
		{"getInternalArray", "(Ljavax/swing/JPasswordField;)[C", nullptr, $PRIVATE | $STATIC, $staticMethod(CleanInternalStorageOnSetText, getInternalArray, $chars*, $JPasswordField*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CleanInternalStorageOnSetText, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CleanInternalStorageOnSetText, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljavax/swing/JPasswordField;Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(CleanInternalStorageOnSetText, test, void, $JPasswordField*, $String*, bool)},
		{"testStorage", "(ZLjavax/swing/JPasswordField;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(CleanInternalStorageOnSetText, testStorage, void, bool, $JPasswordField*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"CleanInternalStorageOnSetText",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CleanInternalStorageOnSetText, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CleanInternalStorageOnSetText);
	});
	return class$;
}

$Class* CleanInternalStorageOnSetText::class$ = nullptr;