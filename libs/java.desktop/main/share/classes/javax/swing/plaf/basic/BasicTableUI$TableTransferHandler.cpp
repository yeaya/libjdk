#include <javax/swing/plaf/basic/BasicTableUI$TableTransferHandler.h>
#include <java/awt/datatransfer/Transferable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <jcpp.h>

#undef COPY

using $Transferable = ::java::awt::datatransfer::Transferable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $TransferHandler = ::javax::swing::TransferHandler;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicTableUI$TableTransferHandler::hashCode() {
	return this->$TransferHandler::hashCode();
}

bool BasicTableUI$TableTransferHandler::equals(Object$* arg0) {
	return this->$TransferHandler::equals(arg0);
}

$Object* BasicTableUI$TableTransferHandler::clone() {
	return this->$TransferHandler::clone();
}

$String* BasicTableUI$TableTransferHandler::toString() {
	return this->$TransferHandler::toString();
}

void BasicTableUI$TableTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicTableUI$TableTransferHandler::init$() {
	$TransferHandler::init$();
}

$Transferable* BasicTableUI$TableTransferHandler::createTransferable($JComponent* c) {
	$useLocalObjectStack();
	if ($instanceOf($JTable, c)) {
		$var($JTable, table, $cast($JTable, c));
		$var($ints, rows, nullptr);
		$var($ints, cols, nullptr);
		bool var$0 = !table->getRowSelectionAllowed();
		if (var$0 && !table->getColumnSelectionAllowed()) {
			return nullptr;
		}
		if (!table->getRowSelectionAllowed()) {
			int32_t rowCount = table->getRowCount();
			$assign(rows, $new($ints, rowCount));
			for (int32_t counter = 0; counter < rowCount; ++counter) {
				rows->set(counter, counter);
			}
		} else {
			$assign(rows, table->getSelectedRows());
		}
		if (!table->getColumnSelectionAllowed()) {
			int32_t colCount = table->getColumnCount();
			$assign(cols, $new($ints, colCount));
			for (int32_t counter = 0; counter < colCount; ++counter) {
				cols->set(counter, counter);
			}
		} else {
			$assign(cols, table->getSelectedColumns());
		}
		if (rows == nullptr || cols == nullptr || rows->length == 0 || cols->length == 0) {
			return nullptr;
		}
		$var($StringBuilder, plainStr, $new($StringBuilder));
		$var($StringBuilder, htmlStr, $new($StringBuilder));
		htmlStr->append("<html>\n<body>\n<table>\n"_s);
		for (int32_t row = 0; row < $nc(rows)->length; ++row) {
			htmlStr->append("<tr>\n"_s);
			for (int32_t col = 0; col < $nc(cols)->length; ++col) {
				$var($Object, obj, table->getValueAt(rows->get(row), cols->get(col)));
				$var($String, val, (obj == nullptr) ? ""_s : obj->toString());
				plainStr->append(val)->append(u'\t');
				htmlStr->append("  <td>"_s)->append(val)->append("</td>\n"_s);
			}
			$nc(plainStr->deleteCharAt(plainStr->length() - 1))->append(u'\n');
			htmlStr->append("</tr>\n"_s);
		}
		plainStr->deleteCharAt(plainStr->length() - 1);
		htmlStr->append("</table>\n</body>\n</html>"_s);
		$var($String, var$1, plainStr->toString());
		return $new($BasicTransferable, var$1, $(htmlStr->toString()));
	}
	return nullptr;
}

int32_t BasicTableUI$TableTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::COPY;
}

BasicTableUI$TableTransferHandler::BasicTableUI$TableTransferHandler() {
}

$Class* BasicTableUI$TableTransferHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(BasicTableUI$TableTransferHandler, init$, void)},
		{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, $virtualMethod(BasicTableUI$TableTransferHandler, createTransferable, $Transferable*, $JComponent*)},
		{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$TableTransferHandler, getSourceActions, int32_t, $JComponent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTableUI$TableTransferHandler", "javax.swing.plaf.basic.BasicTableUI", "TableTransferHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTableUI$TableTransferHandler",
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
		"javax.swing.plaf.basic.BasicTableUI"
	};
	$loadClass(BasicTableUI$TableTransferHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTableUI$TableTransferHandler));
	});
	return class$;
}

$Class* BasicTableUI$TableTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax