#include <javax/swing/JFormattedTextField$AbstractFormatter.h>

#include <java/io/Serializable.h>
#include <java/text/ParseException.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter.h>
#include <jcpp.h>

using $ActionArray = $Array<::javax::swing::Action>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;

namespace javax {
	namespace swing {

$FieldInfo _JFormattedTextField$AbstractFormatter_FieldInfo_[] = {
	{"ftf", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(JFormattedTextField$AbstractFormatter, ftf)},
	{}
};

$MethodInfo _JFormattedTextField$AbstractFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(JFormattedTextField$AbstractFormatter, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField$AbstractFormatter, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField$AbstractFormatter, getActions, $ActionArray*)},
	{"getDocumentFilter", "()Ljavax/swing/text/DocumentFilter;", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField$AbstractFormatter, getDocumentFilter, $DocumentFilter*)},
	{"getFormattedTextField", "()Ljavax/swing/JFormattedTextField;", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField$AbstractFormatter, getFormattedTextField, $JFormattedTextField*)},
	{"getNavigationFilter", "()Ljavax/swing/text/NavigationFilter;", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField$AbstractFormatter, getNavigationFilter, $NavigationFilter*)},
	{"install", "(Ljavax/swing/JFormattedTextField;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField$AbstractFormatter, install, void, $JFormattedTextField*)},
	{"installDocumentFilter", "(Ljavax/swing/text/DocumentFilter;)V", nullptr, $PRIVATE, $method(JFormattedTextField$AbstractFormatter, installDocumentFilter, void, $DocumentFilter*)},
	{"invalidEdit", "()V", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField$AbstractFormatter, invalidEdit, void)},
	{"setEditValid", "(Z)V", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField$AbstractFormatter, setEditValid, void, bool)},
	{"stringToValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JFormattedTextField$AbstractFormatter, stringToValue, $Object*, $String*), "java.text.ParseException"},
	{"uninstall", "()V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField$AbstractFormatter, uninstall, void)},
	{"valueToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JFormattedTextField$AbstractFormatter, valueToString, $String*, Object$*), "java.text.ParseException"},
	{}
};

$InnerClassInfo _JFormattedTextField$AbstractFormatter_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$AbstractFormatter", "javax.swing.JFormattedTextField", "AbstractFormatter", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JFormattedTextField$AbstractFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.JFormattedTextField$AbstractFormatter",
	"java.lang.Object",
	"java.io.Serializable",
	_JFormattedTextField$AbstractFormatter_FieldInfo_,
	_JFormattedTextField$AbstractFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_JFormattedTextField$AbstractFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFormattedTextField"
};

$Object* allocate$JFormattedTextField$AbstractFormatter($Class* clazz) {
	return $of($alloc(JFormattedTextField$AbstractFormatter));
}

void JFormattedTextField$AbstractFormatter::init$() {
}

void JFormattedTextField$AbstractFormatter::install($JFormattedTextField* ftf) {
	$useLocalCurrentObjectStackCache();
	if (this->ftf != nullptr) {
		uninstall();
	}
	$set(this, ftf, ftf);
	if (ftf != nullptr) {
		try {
			ftf->setText($(valueToString($(ftf->getValue()))));
		} catch ($ParseException& pe) {
			ftf->setText(""_s);
			setEditValid(false);
		}
		installDocumentFilter($(getDocumentFilter()));
		ftf->setNavigationFilter($(getNavigationFilter()));
		ftf->setFormatterActions($(getActions()));
	}
}

void JFormattedTextField$AbstractFormatter::uninstall() {
	if (this->ftf != nullptr) {
		installDocumentFilter(nullptr);
		$nc(this->ftf)->setNavigationFilter(nullptr);
		$nc(this->ftf)->setFormatterActions(nullptr);
	}
}

$JFormattedTextField* JFormattedTextField$AbstractFormatter::getFormattedTextField() {
	return this->ftf;
}

void JFormattedTextField$AbstractFormatter::invalidEdit() {
	$var($JFormattedTextField, ftf, getFormattedTextField());
	if (ftf != nullptr) {
		ftf->invalidEdit();
	}
}

void JFormattedTextField$AbstractFormatter::setEditValid(bool valid) {
	$var($JFormattedTextField, ftf, getFormattedTextField());
	if (ftf != nullptr) {
		ftf->setEditValid(valid);
	}
}

$ActionArray* JFormattedTextField$AbstractFormatter::getActions() {
	return nullptr;
}

$DocumentFilter* JFormattedTextField$AbstractFormatter::getDocumentFilter() {
	return nullptr;
}

$NavigationFilter* JFormattedTextField$AbstractFormatter::getNavigationFilter() {
	return nullptr;
}

$Object* JFormattedTextField$AbstractFormatter::clone() {
	$var(JFormattedTextField$AbstractFormatter, formatter, $cast(JFormattedTextField$AbstractFormatter, $Serializable::clone()));
	$set($nc(formatter), ftf, nullptr);
	return $of(formatter);
}

void JFormattedTextField$AbstractFormatter::installDocumentFilter($DocumentFilter* filter) {
	$useLocalCurrentObjectStackCache();
	$var($JFormattedTextField, ftf, getFormattedTextField());
	if (ftf != nullptr) {
		$var($Document, doc, ftf->getDocument());
		if ($instanceOf($AbstractDocument, doc)) {
			$nc(($cast($AbstractDocument, doc)))->setDocumentFilter(filter);
		}
		$load($DocumentFilter);
		$nc(doc)->putProperty($DocumentFilter::class$, nullptr);
	}
}

JFormattedTextField$AbstractFormatter::JFormattedTextField$AbstractFormatter() {
}

$Class* JFormattedTextField$AbstractFormatter::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextField$AbstractFormatter, name, initialize, &_JFormattedTextField$AbstractFormatter_ClassInfo_, allocate$JFormattedTextField$AbstractFormatter);
	return class$;
}

$Class* JFormattedTextField$AbstractFormatter::class$ = nullptr;

	} // swing
} // javax