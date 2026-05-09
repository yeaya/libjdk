#include <javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler.h>
#include <java/awt/datatransfer/Transferable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler$FileTransferable.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

#undef COPY

using $Transferable = ::java::awt::datatransfer::Transferable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $TransferHandler = ::javax::swing::TransferHandler;
using $BasicFileChooserUI$FileTransferHandler$FileTransferable = ::javax::swing::plaf::basic::BasicFileChooserUI$FileTransferHandler$FileTransferable;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicFileChooserUI$FileTransferHandler::hashCode() {
	return this->$TransferHandler::hashCode();
}

bool BasicFileChooserUI$FileTransferHandler::equals(Object$* arg0) {
	return this->$TransferHandler::equals(arg0);
}

$Object* BasicFileChooserUI$FileTransferHandler::clone() {
	return this->$TransferHandler::clone();
}

$String* BasicFileChooserUI$FileTransferHandler::toString() {
	return this->$TransferHandler::toString();
}

void BasicFileChooserUI$FileTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicFileChooserUI$FileTransferHandler::init$() {
	$TransferHandler::init$();
}

$Transferable* BasicFileChooserUI$FileTransferHandler::createTransferable($JComponent* c) {
	$useLocalObjectStack();
	$var($ObjectArray, values, nullptr);
	if ($instanceOf($JList, c)) {
		$assign(values, $cast($JList, c)->getSelectedValues());
	} else if ($instanceOf($JTable, c)) {
		$var($JTable, table, $cast($JTable, c));
		$var($ints, rows, table->getSelectedRows());
		if (rows != nullptr) {
			$assign(values, $new($ObjectArray, rows->length));
			for (int32_t i = 0; i < rows->length; ++i) {
				values->set(i, $(table->getValueAt(rows->get(i), 0)));
			}
		}
	}
	if (values == nullptr || values->length == 0) {
		return nullptr;
	}
	$var($StringBuilder, plainBuf, $new($StringBuilder));
	$var($StringBuilder, htmlBuf, $new($StringBuilder));
	htmlBuf->append("<html>\n<body>\n<ul>\n"_s);
	{
		$var($ObjectArray, arr$, values);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, obj, arr$->get(i$));
			{
				$var($String, val, (obj == nullptr) ? ""_s : obj->toString());
				plainBuf->append(val)->append(u'\n');
				htmlBuf->append("  <li>"_s)->append(val)->append(u'\n');
			}
		}
	}
	plainBuf->deleteCharAt(plainBuf->length() - 1);
	htmlBuf->append("</ul>\n</body>\n</html>"_s);
	$var($String, var$0, plainBuf->toString());
	return $new($BasicFileChooserUI$FileTransferHandler$FileTransferable, var$0, $(htmlBuf->toString()), values);
}

int32_t BasicFileChooserUI$FileTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::COPY;
}

BasicFileChooserUI$FileTransferHandler::BasicFileChooserUI$FileTransferHandler() {
}

$Class* BasicFileChooserUI$FileTransferHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(BasicFileChooserUI$FileTransferHandler, init$, void)},
		{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, $virtualMethod(BasicFileChooserUI$FileTransferHandler, createTransferable, $Transferable*, $JComponent*)},
		{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$FileTransferHandler, getSourceActions, int32_t, $JComponent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler", "javax.swing.plaf.basic.BasicFileChooserUI", "FileTransferHandler", $STATIC},
		{"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler$FileTransferable", "javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler", "FileTransferable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler",
		"javax.swing.TransferHandler",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$FileTransferHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicFileChooserUI$FileTransferHandler));
	});
	return class$;
}

$Class* BasicFileChooserUI$FileTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax