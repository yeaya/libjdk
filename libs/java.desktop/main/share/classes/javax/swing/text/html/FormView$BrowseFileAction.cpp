#include <javax/swing/text/html/FormView$BrowseFileAction.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/FormView.h>
#include <jcpp.h>

#undef APPROVE_OPTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $FormView = ::javax::swing::text::html::FormView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void FormView$BrowseFileAction::init$($FormView* this$0, $AttributeSet* attrs, $Document* model) {
	$set(this, this$0, this$0);
	$set(this, attrs, attrs);
	$set(this, model, model);
}

void FormView$BrowseFileAction::actionPerformed($ActionEvent* ae) {
	$useLocalObjectStack();
	$var($JFileChooser, fc, $new($JFileChooser));
	fc->setMultiSelectionEnabled(false);
	if (fc->showOpenDialog($(this->this$0->getContainer())) == $JFileChooser::APPROVE_OPTION) {
		$var($File, selected, fc->getSelectedFile());
		if (selected != nullptr) {
			try {
				if ($nc(this->model)->getLength() > 0) {
					$nc(this->model)->remove(0, $nc(this->model)->getLength());
				}
				$nc(this->model)->insertString(0, $(selected->getPath()), nullptr);
			} catch ($BadLocationException& ble) {
			}
		}
	}
}

FormView$BrowseFileAction::FormView$BrowseFileAction() {
}

$Class* FormView$BrowseFileAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/FormView;", nullptr, $FINAL | $SYNTHETIC, $field(FormView$BrowseFileAction, this$0)},
		{"attrs", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(FormView$BrowseFileAction, attrs)},
		{"model", "Ljavax/swing/text/Document;", nullptr, $PRIVATE, $field(FormView$BrowseFileAction, model)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/FormView;Ljavax/swing/text/AttributeSet;Ljavax/swing/text/Document;)V", nullptr, 0, $method(FormView$BrowseFileAction, init$, void, $FormView*, $AttributeSet*, $Document*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(FormView$BrowseFileAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.FormView$BrowseFileAction", "javax.swing.text.html.FormView", "BrowseFileAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.FormView$BrowseFileAction",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.FormView"
	};
	$loadClass(FormView$BrowseFileAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormView$BrowseFileAction);
	});
	return class$;
}

$Class* FormView$BrowseFileAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax