#include <CodeBugEditorKit.h>
#include <CodeBugDocument.h>
#include <TableFactory.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

using $CodeBugDocument = ::CodeBugDocument;
using $TableFactory = ::TableFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $ViewFactory = ::javax::swing::text::ViewFactory;

void CodeBugEditorKit::init$() {
	$StyledEditorKit::init$();
	$set(this, defaultFactory, $new($TableFactory));
}

$ViewFactory* CodeBugEditorKit::getViewFactory() {
	return this->defaultFactory;
}

$Document* CodeBugEditorKit::createDefaultDocument() {
	return $cast($AbstractDocument, $new($CodeBugDocument));
}

CodeBugEditorKit::CodeBugEditorKit() {
}

$Class* CodeBugEditorKit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFactory", "Ljavax/swing/text/ViewFactory;", nullptr, 0, $field(CodeBugEditorKit, defaultFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CodeBugEditorKit, init$, void)},
		{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(CodeBugEditorKit, createDefaultDocument, $Document*)},
		{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC, $virtualMethod(CodeBugEditorKit, getViewFactory, $ViewFactory*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CodeBugEditorKit",
		"javax.swing.text.StyledEditorKit",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CodeBugEditorKit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CodeBugEditorKit));
	});
	return class$;
}

$Class* CodeBugEditorKit::class$ = nullptr;