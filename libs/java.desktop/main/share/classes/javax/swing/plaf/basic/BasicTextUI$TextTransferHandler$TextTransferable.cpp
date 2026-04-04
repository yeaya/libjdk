#include <javax/swing/plaf/basic/BasicTextUI$TextTransferHandler$TextTransferable.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringBufferInputStream.h>
#include <java/io/StringReader.h>
#include <java/io/StringWriter.h>
#include <java/lang/ClassNotFoundException.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/plaf/basic/BasicTextUI$TextTransferHandler.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $StringBufferInputStream = ::java::io::StringBufferInputStream;
using $StringReader = ::java::io::StringReader;
using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTextUI$TextTransferHandler$TextTransferable::init$($JTextComponent* c, int32_t start, int32_t end) {
	$useLocalObjectStack();
	$BasicTransferable::init$(nullptr, nullptr);
	$set(this, c, c);
	$var($Document, doc, $nc(c)->getDocument());
	try {
		$set(this, p0, $nc(doc)->createPosition(start));
		$set(this, p1, doc->createPosition(end));
		$set(this, plainData, c->getSelectedText());
		if ($instanceOf($JEditorPane, c)) {
			$var($JEditorPane, ep, $cast($JEditorPane, c));
			$set(this, mimeType, ep->getContentType());
			if ($nc(this->mimeType)->startsWith("text/plain"_s)) {
				return;
			}
			int32_t var$0 = $nc(this->p1)->getOffset();
			$var($StringWriter, sw, $new($StringWriter, var$0 - $nc(this->p0)->getOffset()));
			int32_t var$1 = $nc(this->p0)->getOffset();
			int32_t var$2 = $nc(this->p1)->getOffset();
			$$nc(ep->getEditorKit())->write(sw, doc, var$1, var$2 - this->p0->getOffset());
			if ($nc(this->mimeType)->startsWith("text/html"_s)) {
				$set(this, htmlData, sw->toString());
			} else {
				$set(this, richText, sw->toString());
			}
		}
	} catch ($BadLocationException& ble) {
	} catch ($IOException& ioe) {
	}
}

void BasicTextUI$TextTransferHandler$TextTransferable::removeText() {
	bool var$0 = (this->p0 != nullptr) && (this->p1 != nullptr);
	if (var$0) {
		int32_t var$1 = this->p0->getOffset();
		var$0 = var$1 != this->p1->getOffset();
	}
	if (var$0) {
		try {
			$var($Document, doc, $nc(this->c)->getDocument());
			int32_t var$2 = $nc(this->p0)->getOffset();
			int32_t var$3 = $nc(this->p1)->getOffset();
			$nc(doc)->remove(var$2, var$3 - this->p0->getOffset());
		} catch ($BadLocationException& e) {
		}
	}
}

$DataFlavorArray* BasicTextUI$TextTransferHandler$TextTransferable::getRicherFlavors() {
	$useLocalObjectStack();
	if (this->richText == nullptr) {
		return nullptr;
	}
	try {
		$var($DataFlavorArray, flavors, $new($DataFlavorArray, 3));
		flavors->set(0, $$new($DataFlavor, $$str({this->mimeType, ";class=java.lang.String"_s})));
		flavors->set(1, $$new($DataFlavor, $$str({this->mimeType, ";class=java.io.Reader"_s})));
		flavors->set(2, $$new($DataFlavor, $$str({this->mimeType, ";class=java.io.InputStream;charset=unicode"_s})));
		return flavors;
	} catch ($ClassNotFoundException& cle) {
	}
	return nullptr;
}

$Object* BasicTextUI$TextTransferHandler$TextTransferable::getRicherData($DataFlavor* flavor) {
	if (this->richText == nullptr) {
		return nullptr;
	}
	if ($String::class$->equals($nc(flavor)->getRepresentationClass())) {
		return $of(this->richText);
	} else {
		$load($Reader);
		if ($Reader::class$->equals(flavor->getRepresentationClass())) {
			return $of($new($StringReader, this->richText));
		} else {
			$load($InputStream);
			if ($InputStream::class$->equals(flavor->getRepresentationClass())) {
				return $new($StringBufferInputStream, this->richText);
			}
		}
	}
	$throwNew($UnsupportedFlavorException, flavor);
}

BasicTextUI$TextTransferHandler$TextTransferable::BasicTextUI$TextTransferHandler$TextTransferable() {
}

$Class* BasicTextUI$TextTransferHandler$TextTransferable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p0", "Ljavax/swing/text/Position;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, p0)},
		{"p1", "Ljavax/swing/text/Position;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, p1)},
		{"mimeType", "Ljava/lang/String;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, mimeType)},
		{"richText", "Ljava/lang/String;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, richText)},
		{"c", "Ljavax/swing/text/JTextComponent;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent;II)V", nullptr, 0, $method(BasicTextUI$TextTransferHandler$TextTransferable, init$, void, $JTextComponent*, int32_t, int32_t)},
		{"getRicherData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(BasicTextUI$TextTransferHandler$TextTransferable, getRicherData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException"},
		{"getRicherFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PROTECTED, $virtualMethod(BasicTextUI$TextTransferHandler$TextTransferable, getRicherFlavors, $DataFlavorArray*)},
		{"removeText", "()V", nullptr, 0, $virtualMethod(BasicTextUI$TextTransferHandler$TextTransferable, removeText, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler", "javax.swing.plaf.basic.BasicTextUI", "TextTransferHandler", $STATIC},
		{"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler$TextTransferable", "javax.swing.plaf.basic.BasicTextUI$TextTransferHandler", "TextTransferable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler$TextTransferable",
		"javax.swing.plaf.basic.BasicTransferable",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTextUI"
	};
	$loadClass(BasicTextUI$TextTransferHandler$TextTransferable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextUI$TextTransferHandler$TextTransferable));
	});
	return class$;
}

$Class* BasicTextUI$TextTransferHandler$TextTransferable::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax