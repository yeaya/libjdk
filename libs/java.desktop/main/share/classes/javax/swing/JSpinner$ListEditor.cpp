#include <javax/swing/JSpinner$ListEditor.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner$ListEditor$ListFormatter.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/text/DefaultFormatterFactory.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JSpinner$ListEditor$ListFormatter = ::javax::swing::JSpinner$ListEditor$ListFormatter;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;
using $DefaultFormatterFactory = ::javax::swing::text::DefaultFormatterFactory;

namespace javax {
	namespace swing {

void JSpinner$ListEditor::init$($JSpinner* spinner) {
	$useLocalObjectStack();
	$JSpinner$DefaultEditor::init$(spinner);
	if (!($instanceOf($SpinnerListModel, $($nc(spinner)->getModel())))) {
		$throwNew($IllegalArgumentException, "model not a SpinnerListModel"_s);
	}
	$$nc(getTextField())->setEditable(true);
	$$nc(getTextField())->setFormatterFactory($$new($DefaultFormatterFactory, $$new($JSpinner$ListEditor$ListFormatter, this)));
}

$SpinnerListModel* JSpinner$ListEditor::getModel() {
	return $cast($SpinnerListModel, $$nc(getSpinner())->getModel());
}

JSpinner$ListEditor::JSpinner$ListEditor() {
}

$Class* JSpinner$ListEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JSpinner;)V", nullptr, $PUBLIC, $method(JSpinner$ListEditor, init$, void, $JSpinner*)},
		{"getModel", "()Ljavax/swing/SpinnerListModel;", nullptr, $PUBLIC, $virtualMethod(JSpinner$ListEditor, getModel, $SpinnerListModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSpinner$ListEditor", "javax.swing.JSpinner", "ListEditor", $PUBLIC | $STATIC},
		{"javax.swing.JSpinner$DefaultEditor", "javax.swing.JSpinner", "DefaultEditor", $PUBLIC | $STATIC},
		{"javax.swing.JSpinner$ListEditor$ListFormatter", "javax.swing.JSpinner$ListEditor", "ListFormatter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JSpinner$ListEditor",
		"javax.swing.JSpinner$DefaultEditor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JSpinner"
	};
	$loadClass(JSpinner$ListEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSpinner$ListEditor));
	});
	return class$;
}

$Class* JSpinner$ListEditor::class$ = nullptr;

	} // swing
} // javax