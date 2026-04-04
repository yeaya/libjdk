#include <javax/swing/JEditorPane$PageLoader.h>
#include <java/awt/Component.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane$PageLoader$1.h>
#include <javax/swing/JEditorPane$PageLoader$2.h>
#include <javax/swing/JEditorPane$PageLoader$3.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/SwingWorker.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$PageLoader$1 = ::javax::swing::JEditorPane$PageLoader$1;
using $JEditorPane$PageLoader$2 = ::javax::swing::JEditorPane$PageLoader$2;
using $JEditorPane$PageLoader$3 = ::javax::swing::JEditorPane$PageLoader$3;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingWorker = ::javax::swing::SwingWorker;
using $UIManager = ::javax::swing::UIManager;
using $Document = ::javax::swing::text::Document;

namespace javax {
	namespace swing {

void JEditorPane$PageLoader::init$($JEditorPane* this$0, $Document* doc, $InputStream* in, $URL* old, $URL* page) {
	$set(this, this$0, this$0);
	$SwingWorker::init$();
	$set(this, in, in);
	$set(this, old, old);
	$set(this, page, page);
	$set(this, doc, doc);
}

$Object* JEditorPane$PageLoader::doInBackground() {
	$useLocalObjectStack();
	bool pageLoaded = false;
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		try {
			if (this->in == nullptr) {
				$set(this, in, this->this$0->getStream(this->page));
				if (this->this$0->kit == nullptr) {
					$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this->this$0);
					$assign(var$2, this->old);
					return$1 = true;
					goto $finally;
				}
			}
			if (this->doc == nullptr) {
				try {
					$SwingUtilities::invokeAndWait($$new($JEditorPane$PageLoader$1, this));
				} catch ($InvocationTargetException& ex) {
					$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this->this$0);
					$assign(var$2, this->old);
					return$1 = true;
					goto $finally;
				} catch ($InterruptedException& ex) {
					$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this->this$0);
					$assign(var$2, this->old);
					return$1 = true;
					goto $finally;
				}
			}
			this->this$0->read(this->in, this->doc);
			$init($Document);
			$var($URL, page, $cast($URL, $nc(this->doc)->getProperty($Document::StreamDescriptionProperty)));
			$var($String, reference, $nc(page)->getRef());
			if (reference != nullptr) {
				$var($Runnable, callScrollToReference, $new($JEditorPane$PageLoader$2, this));
				$SwingUtilities::invokeLater(callScrollToReference);
			}
			pageLoaded = true;
		} catch ($IOException& ioe) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this->this$0);
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		if (pageLoaded) {
			$SwingUtilities::invokeLater($$new($JEditorPane$PageLoader$3, this));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	return (pageLoaded ? this->page : this->old);
}

JEditorPane$PageLoader::JEditorPane$PageLoader() {
}

$Class* JEditorPane$PageLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$PageLoader, this$0)},
		{"in", "Ljava/io/InputStream;", nullptr, 0, $field(JEditorPane$PageLoader, in)},
		{"old", "Ljava/net/URL;", nullptr, 0, $field(JEditorPane$PageLoader, old)},
		{"page", "Ljava/net/URL;", nullptr, 0, $field(JEditorPane$PageLoader, page)},
		{"doc", "Ljavax/swing/text/Document;", nullptr, 0, $field(JEditorPane$PageLoader, doc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/Document;Ljava/io/InputStream;Ljava/net/URL;Ljava/net/URL;)V", nullptr, 0, $method(JEditorPane$PageLoader, init$, void, $JEditorPane*, $Document*, $InputStream*, $URL*, $URL*)},
		{"doInBackground", "()Ljava/net/URL;", nullptr, $PROTECTED, $virtualMethod(JEditorPane$PageLoader, doInBackground, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
		{"javax.swing.JEditorPane$PageLoader$3", nullptr, nullptr, 0},
		{"javax.swing.JEditorPane$PageLoader$2", nullptr, nullptr, 0},
		{"javax.swing.JEditorPane$PageLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$PageLoader",
		"javax.swing.SwingWorker",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/SwingWorker<Ljava/net/URL;Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JEditorPane"
	};
	$loadClass(JEditorPane$PageLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JEditorPane$PageLoader));
	});
	return class$;
}

$Class* JEditorPane$PageLoader::class$ = nullptr;

	} // swing
} // javax