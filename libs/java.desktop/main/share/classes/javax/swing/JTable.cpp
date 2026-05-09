#include <javax/swing/JTable.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterAbortException.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/MessageFormat.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable$1.h>
#include <javax/swing/JTable$2.h>
#include <javax/swing/JTable$3.h>
#include <javax/swing/JTable$4.h>
#include <javax/swing/JTable$5.h>
#include <javax/swing/JTable$6.h>
#include <javax/swing/JTable$AccessibleJTable.h>
#include <javax/swing/JTable$BooleanEditor.h>
#include <javax/swing/JTable$BooleanRenderer.h>
#include <javax/swing/JTable$CellEditorRemover.h>
#include <javax/swing/JTable$DateRenderer.h>
#include <javax/swing/JTable$DoubleRenderer.h>
#include <javax/swing/JTable$DropLocation.h>
#include <javax/swing/JTable$GenericEditor.h>
#include <javax/swing/JTable$IconRenderer.h>
#include <javax/swing/JTable$ModelChange.h>
#include <javax/swing/JTable$NumberEditor.h>
#include <javax/swing/JTable$NumberRenderer.h>
#include <javax/swing/JTable$PrintMode.h>
#include <javax/swing/JTable$Resizable2.h>
#include <javax/swing/JTable$Resizable3.h>
#include <javax/swing/JTable$SortManager.h>
#include <javax/swing/JTable$ThreadSafePrintable.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SizeSequence.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TablePrintable.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/RowSorterEvent$Type.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <javax/swing/event/TableColumnModelEvent.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <javax/swing/table/DefaultTableColumnModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/PrintingStatus.h>
#include <sun/swing/SwingUtilities2$Section.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ALL_COLUMNS
#undef AUTO_RESIZE_ALL_COLUMNS
#undef AUTO_RESIZE_LAST_COLUMN
#undef AUTO_RESIZE_NEXT_COLUMN
#undef AUTO_RESIZE_OFF
#undef AUTO_RESIZE_SUBSEQUENT_COLUMNS
#undef BACKWARD_TRAVERSAL_KEYS
#undef DELETE
#undef FALSE
#undef FIT_WIDTH
#undef FORWARD_TRAVERSAL_KEYS
#undef HEADER_ROW
#undef HORIZONTAL
#undef INSERT
#undef KEY_PRESSED
#undef LEADING
#undef MAX_VALUE
#undef MIDDLE
#undef N
#undef NOBUTTON
#undef SORTED
#undef SORT_ORDER_CHANGED
#undef TRAILING
#undef TRUE
#undef UPDATE
#undef UPPER_TRAILING_CORNER
#undef USE_SELECTION
#undef VERTICAL
#undef VK_ALT
#undef VK_ALT_GRAPH
#undef VK_CONTROL
#undef VK_META
#undef VK_SHIFT
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED

using $intArray2 = $Array<int32_t, 2>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Printable = ::java::awt::print::Printable;
using $PrinterAbortException = ::java::awt::print::PrinterAbortException;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MessageFormat = ::java::text::MessageFormat;
using $Date = ::java::util::Date;
using $Enumeration = ::java::util::Enumeration;
using $EventObject = ::java::util::EventObject;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $PrintService = ::javax::print::PrintService;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $DropMode = ::javax::swing::DropMode;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable$1 = ::javax::swing::JTable$1;
using $JTable$2 = ::javax::swing::JTable$2;
using $JTable$3 = ::javax::swing::JTable$3;
using $JTable$4 = ::javax::swing::JTable$4;
using $JTable$5 = ::javax::swing::JTable$5;
using $JTable$6 = ::javax::swing::JTable$6;
using $JTable$AccessibleJTable = ::javax::swing::JTable$AccessibleJTable;
using $JTable$BooleanEditor = ::javax::swing::JTable$BooleanEditor;
using $JTable$BooleanRenderer = ::javax::swing::JTable$BooleanRenderer;
using $JTable$CellEditorRemover = ::javax::swing::JTable$CellEditorRemover;
using $JTable$DateRenderer = ::javax::swing::JTable$DateRenderer;
using $JTable$DoubleRenderer = ::javax::swing::JTable$DoubleRenderer;
using $JTable$DropLocation = ::javax::swing::JTable$DropLocation;
using $JTable$GenericEditor = ::javax::swing::JTable$GenericEditor;
using $JTable$IconRenderer = ::javax::swing::JTable$IconRenderer;
using $JTable$ModelChange = ::javax::swing::JTable$ModelChange;
using $JTable$NumberEditor = ::javax::swing::JTable$NumberEditor;
using $JTable$NumberRenderer = ::javax::swing::JTable$NumberRenderer;
using $JTable$PrintMode = ::javax::swing::JTable$PrintMode;
using $JTable$Resizable2 = ::javax::swing::JTable$Resizable2;
using $JTable$Resizable3 = ::javax::swing::JTable$Resizable3;
using $JTable$SortManager = ::javax::swing::JTable$SortManager;
using $JTable$ThreadSafePrintable = ::javax::swing::JTable$ThreadSafePrintable;
using $JViewport = ::javax::swing::JViewport;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $RowSorter = ::javax::swing::RowSorter;
using $SizeSequence = ::javax::swing::SizeSequence;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TablePrintable = ::javax::swing::TablePrintable;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $RowSorterEvent = ::javax::swing::event::RowSorterEvent;
using $RowSorterEvent$Type = ::javax::swing::event::RowSorterEvent$Type;
using $TableColumnModelEvent = ::javax::swing::event::TableColumnModelEvent;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableUI = ::javax::swing::plaf::TableUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $DefaultTableCellRenderer$UIResource = ::javax::swing::table::DefaultTableCellRenderer$UIResource;
using $DefaultTableColumnModel = ::javax::swing::table::DefaultTableColumnModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $PrintingStatus = ::sun::swing::PrintingStatus;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SwingUtilities2$Section = ::sun::swing::SwingUtilities2$Section;

namespace javax {
	namespace swing {

class JTable$$Lambda$lambda$createDefaultRenderers$0 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultRenderers$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultRenderers$0(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultRenderers$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultRenderers$0, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultRenderers$0, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$0",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultRenderers$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultRenderers$0);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultRenderers$0::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultRenderers$1$1 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultRenderers$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultRenderers$1(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultRenderers$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultRenderers$1$1, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultRenderers$1$1, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$1$1",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultRenderers$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultRenderers$1$1);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultRenderers$1$1::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultRenderers$2$2 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultRenderers$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultRenderers$2(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultRenderers$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultRenderers$2$2, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultRenderers$2$2, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$2$2",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultRenderers$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultRenderers$2$2);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultRenderers$2$2::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultRenderers$4$3 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultRenderers$4$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultRenderers$4(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultRenderers$4$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultRenderers$4$3, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultRenderers$4$3, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$4$3",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultRenderers$4$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultRenderers$4$3);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultRenderers$4$3::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultRenderers$5$4 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultRenderers$5$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultRenderers$5(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultRenderers$5$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultRenderers$5$4, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultRenderers$5$4, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$5$4",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultRenderers$5$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultRenderers$5$4);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultRenderers$5$4::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultRenderers$7$5 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultRenderers$7$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultRenderers$7(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultRenderers$7$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultRenderers$7$5, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultRenderers$7$5, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$7$5",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultRenderers$7$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultRenderers$7$5);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultRenderers$7$5::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultEditors$8$6 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultEditors$8$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultEditors$8(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultEditors$8$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultEditors$8$6, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultEditors$8$6, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultEditors$8$6",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultEditors$8$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultEditors$8$6);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultEditors$8$6::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultEditors$9$7 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultEditors$9$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultEditors$9(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultEditors$9$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultEditors$9$7, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultEditors$9$7, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultEditors$9$7",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultEditors$9$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultEditors$9$7);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultEditors$9$7::class$ = nullptr;

class JTable$$Lambda$lambda$createDefaultEditors$10$8 : public $UIDefaults$LazyValue {
	$class(JTable$$Lambda$lambda$createDefaultEditors$10$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return JTable::lambda$createDefaultEditors$10(t);
	}
};
$Class* JTable$$Lambda$lambda$createDefaultEditors$10$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$createDefaultEditors$10$8, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$createDefaultEditors$10$8, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$createDefaultEditors$10$8",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$createDefaultEditors$10$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$createDefaultEditors$10$8);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$createDefaultEditors$10$8::class$ = nullptr;

class JTable$$Lambda$lambda$print$11$9 : public $Runnable {
	$class(JTable$$Lambda$lambda$print$11$9, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JTable* inst, $PrinterJob* job, $PrintRequestAttributeSet* copyAttr, Object$* lock, $PrintingStatus* printingStatus) {
		$set(this, inst$, inst);
		$set(this, job, job);
		$set(this, copyAttr, copyAttr);
		$set(this, lock, lock);
		$set(this, printingStatus, printingStatus);
	}
	virtual void run() override {
		$nc(inst$)->lambda$print$11(job, copyAttr, lock, printingStatus);
	}
	JTable* inst$ = nullptr;
	$PrinterJob* job = nullptr;
	$PrintRequestAttributeSet* copyAttr = nullptr;
	$Object* lock = nullptr;
	$PrintingStatus* printingStatus = nullptr;
};
$Class* JTable$$Lambda$lambda$print$11$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JTable$$Lambda$lambda$print$11$9, inst$)},
		{"job", "Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC, $field(JTable$$Lambda$lambda$print$11$9, job)},
		{"copyAttr", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PUBLIC, $field(JTable$$Lambda$lambda$print$11$9, copyAttr)},
		{"lock", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JTable$$Lambda$lambda$print$11$9, lock)},
		{"printingStatus", "Lsun/swing/PrintingStatus;", nullptr, $PUBLIC, $field(JTable$$Lambda$lambda$print$11$9, printingStatus)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTable;Ljava/awt/print/PrinterJob;Ljavax/print/attribute/PrintRequestAttributeSet;Ljava/lang/Object;Lsun/swing/PrintingStatus;)V", nullptr, $PUBLIC, $method(JTable$$Lambda$lambda$print$11$9, init$, void, JTable*, $PrinterJob*, $PrintRequestAttributeSet*, Object$*, $PrintingStatus*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTable$$Lambda$lambda$print$11$9, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JTable$$Lambda$lambda$print$11$9",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTable$$Lambda$lambda$print$11$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$$Lambda$lambda$print$11$9);
	});
	return class$;
}
$Class* JTable$$Lambda$lambda$print$11$9::class$ = nullptr;

$String* JTable::toString() {
	return this->$JComponent::toString();
}

int32_t JTable::hashCode() {
	return this->$JComponent::hashCode();
}

bool JTable::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* JTable::clone() {
	return this->$JComponent::clone();
}

void JTable::finalize() {
	this->$JComponent::finalize();
}

bool JTable::$assertionsDisabled = false;
$String* JTable::uiClassID = nullptr;

void JTable::init$() {
	JTable::init$(nullptr, nullptr, nullptr);
}

void JTable::init$($TableModel* dm) {
	JTable::init$(dm, nullptr, nullptr);
}

void JTable::init$($TableModel* dm, $TableColumnModel* cm) {
	JTable::init$(dm, cm, nullptr);
}

void JTable::init$($TableModel* dm$renamed, $TableColumnModel* cm$renamed, $ListSelectionModel* sm$renamed) {
	$useLocalObjectStack();
	$var($TableModel, dm, dm$renamed);
	$var($TableColumnModel, cm, cm$renamed);
	$var($ListSelectionModel, sm, sm$renamed);
	$JComponent::init$();
	$set(this, editorRemover, nullptr);
	$init($DropMode);
	$set(this, dropMode, $DropMode::USE_SELECTION);
	setLayout(nullptr);
	setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, $($JComponent::getManagingFocusForwardTraversalKeys()));
	setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, $($JComponent::getManagingFocusBackwardTraversalKeys()));
	if (cm == nullptr) {
		$assign(cm, createDefaultColumnModel());
		this->autoCreateColumnsFromModel = true;
	}
	setColumnModel(cm);
	if (sm == nullptr) {
		$assign(sm, createDefaultSelectionModel());
	}
	setSelectionModel(sm);
	if (dm == nullptr) {
		$assign(dm, createDefaultDataModel());
	}
	setModel(dm);
	initializeLocalVars();
	updateUI();
}

void JTable::init$(int32_t numRows, int32_t numColumns) {
	JTable::init$($$new($DefaultTableModel, numRows, numColumns));
}

void JTable::init$($Vector* rowData, $Vector* columnNames) {
	JTable::init$($$new($DefaultTableModel, rowData, columnNames));
}

void JTable::init$($ObjectArray2* rowData, $ObjectArray* columnNames) {
	JTable::init$($$new($JTable$1, columnNames, rowData));
}

void JTable::addNotify() {
	$JComponent::addNotify();
	configureEnclosingScrollPane();
}

void JTable::configureEnclosingScrollPane() {
	$useLocalObjectStack();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		$var($JViewport, port, $cast($JViewport, parent));
		$var($Container, gp, port->getParent());
		if ($instanceOf($JScrollPane, gp)) {
			$var($JScrollPane, scrollPane, $cast($JScrollPane, gp));
			$var($JViewport, viewport, scrollPane->getViewport());
			if (viewport == nullptr || !$equals($SwingUtilities::getUnwrappedView(viewport), this)) {
				return;
			}
			scrollPane->setColumnHeaderView($(getTableHeader()));
			configureEnclosingScrollPaneUI();
		}
	}
}

void JTable::configureEnclosingScrollPaneUI() {
	$useLocalObjectStack();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		$var($JViewport, port, $cast($JViewport, parent));
		$var($Container, gp, port->getParent());
		if ($instanceOf($JScrollPane, gp)) {
			$var($JScrollPane, scrollPane, $cast($JScrollPane, gp));
			$var($JViewport, viewport, scrollPane->getViewport());
			if (viewport == nullptr || !$equals($SwingUtilities::getUnwrappedView(viewport), this)) {
				return;
			}
			$var($Border, border, scrollPane->getBorder());
			if (border == nullptr || $instanceOf($UIResource, border)) {
				$var($Border, scrollPaneBorder, $UIManager::getBorder("Table.scrollPaneBorder"_s));
				if (scrollPaneBorder != nullptr) {
					scrollPane->setBorder(scrollPaneBorder);
				}
			}
			$var($Component, corner, scrollPane->getCorner($JScrollPane::UPPER_TRAILING_CORNER));
			if (corner == nullptr || $instanceOf($UIResource, corner)) {
				$assign(corner, nullptr);
				try {
					$assign(corner, $cast($Component, $UIManager::get("Table.scrollPaneCornerComponent"_s)));
				} catch ($Exception& e) {
				}
				scrollPane->setCorner($JScrollPane::UPPER_TRAILING_CORNER, corner);
			}
		}
	}
}

void JTable::removeNotify() {
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->removePropertyChangeListener("permanentFocusOwner"_s, this->editorRemover);
	$set(this, editorRemover, nullptr);
	unconfigureEnclosingScrollPane();
	$JComponent::removeNotify();
}

void JTable::unconfigureEnclosingScrollPane() {
	$useLocalObjectStack();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		$var($JViewport, port, $cast($JViewport, parent));
		$var($Container, gp, port->getParent());
		if ($instanceOf($JScrollPane, gp)) {
			$var($JScrollPane, scrollPane, $cast($JScrollPane, gp));
			$var($JViewport, viewport, scrollPane->getViewport());
			if (viewport == nullptr || !$equals($SwingUtilities::getUnwrappedView(viewport), this)) {
				return;
			}
			scrollPane->setColumnHeaderView(nullptr);
			$var($Component, corner, scrollPane->getCorner($JScrollPane::UPPER_TRAILING_CORNER));
			if ($instanceOf($UIResource, corner)) {
				scrollPane->setCorner($JScrollPane::UPPER_TRAILING_CORNER, nullptr);
			}
		}
	}
}

void JTable::setUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "rowHeight"_s) {
		if (!this->isRowHeightSet) {
			setRowHeight($nc($cast($Number, value))->intValue());
			this->isRowHeightSet = false;
		}
		return;
	}
	$JComponent::setUIProperty(propertyName, value);
}

$JScrollPane* JTable::createScrollPaneForTable(JTable* aTable) {
	$init(JTable);
	return $new($JScrollPane, aTable);
}

void JTable::setTableHeader($JTableHeader* tableHeader) {
	if (this->tableHeader != tableHeader) {
		$var($JTableHeader, old, this->tableHeader);
		if (old != nullptr) {
			old->setTable(nullptr);
		}
		$set(this, tableHeader, tableHeader);
		if (tableHeader != nullptr) {
			tableHeader->setTable(this);
		}
		firePropertyChange("tableHeader"_s, old, tableHeader);
	}
}

$JTableHeader* JTable::getTableHeader() {
	return this->tableHeader;
}

void JTable::setRowHeight(int32_t rowHeight) {
	if (rowHeight <= 0) {
		$throwNew($IllegalArgumentException, "New row height less than 1"_s);
	}
	int32_t old = this->rowHeight;
	this->rowHeight = rowHeight;
	$set(this, rowModel, nullptr);
	if (this->sortManager != nullptr) {
		$set(this->sortManager, modelRowSizes, nullptr);
	}
	this->isRowHeightSet = true;
	resizeAndRepaint();
	firePropertyChange("rowHeight"_s, old, rowHeight);
}

int32_t JTable::getRowHeight() {
	return this->rowHeight;
}

$SizeSequence* JTable::getRowModel() {
	if (this->rowModel == nullptr) {
		int32_t var$0 = getRowCount();
		$set(this, rowModel, $new($SizeSequence, var$0, getRowHeight()));
	}
	return this->rowModel;
}

void JTable::setRowHeight(int32_t row, int32_t rowHeight) {
	if (rowHeight <= 0) {
		$throwNew($IllegalArgumentException, "New row height less than 1"_s);
	}
	$$nc(getRowModel())->setSize(row, rowHeight);
	if (this->sortManager != nullptr) {
		this->sortManager->setViewRowHeight(row, rowHeight);
	}
	resizeAndRepaint();
}

int32_t JTable::getRowHeight(int32_t row) {
	return (this->rowModel == nullptr) ? getRowHeight() : this->rowModel->getSize(row);
}

void JTable::setRowMargin(int32_t rowMargin) {
	int32_t old = this->rowMargin;
	this->rowMargin = rowMargin;
	resizeAndRepaint();
	firePropertyChange("rowMargin"_s, old, rowMargin);
}

int32_t JTable::getRowMargin() {
	return this->rowMargin;
}

void JTable::setIntercellSpacing($Dimension* intercellSpacing) {
	setRowMargin($nc(intercellSpacing)->height);
	$$nc(getColumnModel())->setColumnMargin(intercellSpacing->width);
	resizeAndRepaint();
}

$Dimension* JTable::getIntercellSpacing() {
	return $new($Dimension, $$nc(getColumnModel())->getColumnMargin(), this->rowMargin);
}

void JTable::setGridColor($Color* gridColor) {
	if (gridColor == nullptr) {
		$throwNew($IllegalArgumentException, "New color is null"_s);
	}
	$var($Color, old, this->gridColor);
	$set(this, gridColor, gridColor);
	firePropertyChange("gridColor"_s, old, gridColor);
	repaint();
}

$Color* JTable::getGridColor() {
	return this->gridColor;
}

void JTable::setShowGrid(bool showGrid) {
	setShowHorizontalLines(showGrid);
	setShowVerticalLines(showGrid);
	repaint();
}

void JTable::setShowHorizontalLines(bool showHorizontalLines) {
	bool old = this->showHorizontalLines;
	this->showHorizontalLines = showHorizontalLines;
	firePropertyChange("showHorizontalLines"_s, old, showHorizontalLines);
	repaint();
}

void JTable::setShowVerticalLines(bool showVerticalLines) {
	bool old = this->showVerticalLines;
	this->showVerticalLines = showVerticalLines;
	firePropertyChange("showVerticalLines"_s, old, showVerticalLines);
	repaint();
}

bool JTable::getShowHorizontalLines() {
	return this->showHorizontalLines;
}

bool JTable::getShowVerticalLines() {
	return this->showVerticalLines;
}

void JTable::setAutoResizeMode(int32_t mode) {
	if (isValidAutoResizeMode(mode)) {
		int32_t old = this->autoResizeMode;
		this->autoResizeMode = mode;
		resizeAndRepaint();
		if (this->tableHeader != nullptr) {
			this->tableHeader->resizeAndRepaint();
		}
		firePropertyChange("autoResizeMode"_s, old, this->autoResizeMode);
	}
}

bool JTable::isValidAutoResizeMode(int32_t mode) {
	$init(JTable);
	return (mode == JTable::AUTO_RESIZE_OFF) || (mode == JTable::AUTO_RESIZE_NEXT_COLUMN) || (mode == JTable::AUTO_RESIZE_SUBSEQUENT_COLUMNS) || (mode == JTable::AUTO_RESIZE_LAST_COLUMN) || (mode == JTable::AUTO_RESIZE_ALL_COLUMNS);
}

int32_t JTable::getAutoResizeMode() {
	return this->autoResizeMode;
}

void JTable::setAutoCreateColumnsFromModel(bool autoCreateColumnsFromModel) {
	if (this->autoCreateColumnsFromModel != autoCreateColumnsFromModel) {
		bool old = this->autoCreateColumnsFromModel;
		this->autoCreateColumnsFromModel = autoCreateColumnsFromModel;
		if (autoCreateColumnsFromModel) {
			createDefaultColumnsFromModel();
		}
		firePropertyChange("autoCreateColumnsFromModel"_s, old, autoCreateColumnsFromModel);
	}
}

bool JTable::getAutoCreateColumnsFromModel() {
	return this->autoCreateColumnsFromModel;
}

void JTable::createDefaultColumnsFromModel() {
	$useLocalObjectStack();
	$var($TableModel, m, getModel());
	if (m != nullptr) {
		$var($TableColumnModel, cm, getColumnModel());
		while ($nc(cm)->getColumnCount() > 0) {
			cm->removeColumn($(cm->getColumn(0)));
		}
		for (int32_t i = 0; i < m->getColumnCount(); ++i) {
			$var($TableColumn, newColumn, $new($TableColumn, i));
			addColumn(newColumn);
		}
	}
}

void JTable::setDefaultRenderer($Class* columnClass, $TableCellRenderer* renderer) {
	if (renderer != nullptr) {
		$nc(this->defaultRenderersByColumnClass)->put(columnClass, renderer);
	} else {
		$nc(this->defaultRenderersByColumnClass)->remove(columnClass);
	}
}

$TableCellRenderer* JTable::getDefaultRenderer($Class* columnClass) {
	if (columnClass == nullptr) {
		return nullptr;
	} else {
		$var($Object, renderer, $nc(this->defaultRenderersByColumnClass)->get(columnClass));
		if (renderer != nullptr) {
			return $cast($TableCellRenderer, renderer);
		} else {
			$Class* c = columnClass->getSuperclass();
			if (c == nullptr && columnClass != $Object::class$) {
				c = $Object::class$;
			}
			return getDefaultRenderer(c);
		}
	}
}

void JTable::setDefaultEditor($Class* columnClass, $TableCellEditor* editor) {
	if (editor != nullptr) {
		$nc(this->defaultEditorsByColumnClass)->put(columnClass, editor);
	} else {
		$nc(this->defaultEditorsByColumnClass)->remove(columnClass);
	}
}

$TableCellEditor* JTable::getDefaultEditor($Class* columnClass) {
	if (columnClass == nullptr) {
		return nullptr;
	} else {
		$var($Object, editor, $nc(this->defaultEditorsByColumnClass)->get(columnClass));
		if (editor != nullptr) {
			return $cast($TableCellEditor, editor);
		} else {
			return getDefaultEditor(columnClass->getSuperclass());
		}
	}
}

void JTable::setDragEnabled(bool b) {
	checkDragEnabled(b);
	this->dragEnabled = b;
}

void JTable::checkDragEnabled(bool b) {
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
}

bool JTable::getDragEnabled() {
	return this->dragEnabled;
}

void JTable::setDropMode($DropMode* dropMode) {
	checkDropMode(dropMode);
	$set(this, dropMode, dropMode);
}

void JTable::checkDropMode($DropMode* dropMode) {
	$init(JTable);
	if (dropMode != nullptr) {
		$init($JTable$6);
		switch ($nc($JTable$6::$SwitchMap$javax$swing$DropMode)->get((dropMode)->ordinal())) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return;
		}
	}
	$throwNew($IllegalArgumentException, $$str({dropMode, ": Unsupported drop mode for table"_s}));
}

$DropMode* JTable::getDropMode() {
	return this->dropMode;
}

$TransferHandler$DropLocation* JTable::dropLocationForPoint($Point* p) {
	$useLocalObjectStack();
	$var($JTable$DropLocation, location, nullptr);
	int32_t row = rowAtPoint(p);
	int32_t col = columnAtPoint(p);
	bool var$0 = $equals($Boolean::TRUE, getClientProperty("Table.isFileList"_s));
	bool outside = var$0 && $SwingUtilities2::pointOutsidePrefSize(this, row, col, p);
	$var($Rectangle, rect, getCellRect(row, col, true));
	$SwingUtilities2$Section* xSection = nullptr;
	$SwingUtilities2$Section* ySection = nullptr;
	bool between = false;
	bool ltr = $$nc(getComponentOrientation())->isLeftToRight();
	$init($JTable$6);
	switch ($nc($JTable$6::$SwitchMap$javax$swing$DropMode)->get($nc((this->dropMode))->ordinal())) {
	case 1:
	case 2:
		if (row == -1 || col == -1 || outside) {
			$assign(location, $new($JTable$DropLocation, p, -1, -1, false, false));
		} else {
			$assign(location, $new($JTable$DropLocation, p, row, col, false, false));
		}
		break;
	case 3:
		if (row == -1 && col == -1) {
			$assign(location, $new($JTable$DropLocation, p, 0, 0, true, true));
			break;
		}
		xSection = $SwingUtilities2::liesInHorizontal(rect, p, ltr, true);
		if (row == -1) {
			$init($SwingUtilities2$Section);
			if (xSection == $SwingUtilities2$Section::LEADING) {
				$assign(location, $new($JTable$DropLocation, p, getRowCount(), col, true, true));
			} else if (xSection == $SwingUtilities2$Section::TRAILING) {
				$assign(location, $new($JTable$DropLocation, p, getRowCount(), col + 1, true, true));
			} else {
				$assign(location, $new($JTable$DropLocation, p, getRowCount(), col, true, false));
			}
		} else {
			$init($SwingUtilities2$Section);
			if (xSection == $SwingUtilities2$Section::LEADING || xSection == $SwingUtilities2$Section::TRAILING) {
				ySection = $SwingUtilities2::liesInVertical(rect, p, true);
				if (ySection == $SwingUtilities2$Section::LEADING) {
					between = true;
				} else if (ySection == $SwingUtilities2$Section::TRAILING) {
					++row;
					between = true;
				}
				$assign(location, $new($JTable$DropLocation, p, row, xSection == $SwingUtilities2$Section::TRAILING ? col + 1 : col, between, true));
			} else {
				if ($SwingUtilities2::liesInVertical(rect, p, false) == $SwingUtilities2$Section::TRAILING) {
					++row;
				}
				$assign(location, $new($JTable$DropLocation, p, row, col, true, false));
			}
		}
		break;
	case 4:
		if (row == -1 && col == -1) {
			$assign(location, $new($JTable$DropLocation, p, -1, -1, false, false));
			break;
		}
		if (row == -1) {
			$assign(location, $new($JTable$DropLocation, p, getRowCount(), col, true, false));
			break;
		}
		$init($SwingUtilities2$Section);
		if ($SwingUtilities2::liesInVertical(rect, p, false) == $SwingUtilities2$Section::TRAILING) {
			++row;
		}
		$assign(location, $new($JTable$DropLocation, p, row, col, true, false));
		break;
	case 7:
		if (row == -1 && col == -1) {
			$assign(location, $new($JTable$DropLocation, p, -1, -1, false, false));
			break;
		}
		if (row == -1) {
			$assign(location, $new($JTable$DropLocation, p, getRowCount(), col, true, false));
			break;
		}
		ySection = $SwingUtilities2::liesInVertical(rect, p, true);
		$init($SwingUtilities2$Section);
		if (ySection == $SwingUtilities2$Section::LEADING) {
			between = true;
		} else if (ySection == $SwingUtilities2$Section::TRAILING) {
			++row;
			between = true;
		}
		$assign(location, $new($JTable$DropLocation, p, row, col, between, false));
		break;
	case 5:
		if (row == -1) {
			$assign(location, $new($JTable$DropLocation, p, -1, -1, false, false));
			break;
		}
		if (col == -1) {
			$assign(location, $new($JTable$DropLocation, p, getColumnCount(), col, false, true));
			break;
		}
		$init($SwingUtilities2$Section);
		if ($SwingUtilities2::liesInHorizontal(rect, p, ltr, false) == $SwingUtilities2$Section::TRAILING) {
			++col;
		}
		$assign(location, $new($JTable$DropLocation, p, row, col, false, true));
		break;
	case 8:
		if (row == -1) {
			$assign(location, $new($JTable$DropLocation, p, -1, -1, false, false));
			break;
		}
		if (col == -1) {
			$assign(location, $new($JTable$DropLocation, p, row, getColumnCount(), false, true));
			break;
		}
		xSection = $SwingUtilities2::liesInHorizontal(rect, p, ltr, true);
		$init($SwingUtilities2$Section);
		if (xSection == $SwingUtilities2$Section::LEADING) {
			between = true;
		} else if (xSection == $SwingUtilities2$Section::TRAILING) {
			++col;
			between = true;
		}
		$assign(location, $new($JTable$DropLocation, p, row, col, false, between));
		break;
	case 6:
		if (row == -1 && col == -1) {
			$assign(location, $new($JTable$DropLocation, p, 0, 0, true, true));
			break;
		}
		xSection = $SwingUtilities2::liesInHorizontal(rect, p, ltr, true);
		if (row == -1) {
			$init($SwingUtilities2$Section);
			if (xSection == $SwingUtilities2$Section::LEADING) {
				$assign(location, $new($JTable$DropLocation, p, getRowCount(), col, true, true));
			} else if (xSection == $SwingUtilities2$Section::TRAILING) {
				$assign(location, $new($JTable$DropLocation, p, getRowCount(), col + 1, true, true));
			} else {
				$assign(location, $new($JTable$DropLocation, p, getRowCount(), col, true, false));
			}
			break;
		}
		ySection = $SwingUtilities2::liesInVertical(rect, p, true);
		$init($SwingUtilities2$Section);
		if (ySection == $SwingUtilities2$Section::LEADING) {
			between = true;
		} else if (ySection == $SwingUtilities2$Section::TRAILING) {
			++row;
			between = true;
		}
		$assign(location, $new($JTable$DropLocation, p, row, xSection == $SwingUtilities2$Section::TRAILING ? col + 1 : col, between, xSection != $SwingUtilities2$Section::MIDDLE));
		break;
	default:
		if (!JTable::$assertionsDisabled) {
			$throwNew($AssertionError, $of("Unexpected drop mode"_s));
		}
	}
	return location;
}

$Object* JTable::setDropLocation($TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	$useLocalObjectStack();
	$var($Object, retVal, nullptr);
	$var($JTable$DropLocation, tableLocation, $cast($JTable$DropLocation, location));
	$init($DropMode);
	if (this->dropMode == $DropMode::USE_SELECTION) {
		if (tableLocation == nullptr) {
			if (!forDrop && state != nullptr) {
				clearSelection();
				$var($ints, rows, $cast($intArray2, state)->get(0));
				$var($ints, cols, $cast($intArray2, state)->get(1));
				$var($ints, anchleads, $cast($intArray2, state)->get(2));
				{
					$var($ints, arr$, rows);
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						int32_t row = arr$->get(i$);
						{
							addRowSelectionInterval(row, row);
						}
					}
				}
				{
					$var($ints, arr$, cols);
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						int32_t col = arr$->get(i$);
						{
							addColumnSelectionInterval(col, col);
						}
					}
				}
				$SwingUtilities2::setLeadAnchorWithoutSelection($(getSelectionModel()), $nc(anchleads)->get(1), $nc(anchleads)->get(0));
				$SwingUtilities2::setLeadAnchorWithoutSelection($($$nc(getColumnModel())->getSelectionModel()), anchleads->get(3), anchleads->get(2));
			}
		} else {
			if (this->dropLocation == nullptr) {
				$assign(retVal, $new($intArray2, {
					$(getSelectedRows()),
					$(getSelectedColumns()),
					$$new($ints, {
						getAdjustedIndex($$nc(getSelectionModel())->getAnchorSelectionIndex(), true),
						getAdjustedIndex($$nc(getSelectionModel())->getLeadSelectionIndex(), true),
						getAdjustedIndex($$nc($$nc(getColumnModel())->getSelectionModel())->getAnchorSelectionIndex(), false),
						getAdjustedIndex($$nc($$nc(getColumnModel())->getSelectionModel())->getLeadSelectionIndex(), false)
					})
				}));
			} else {
				$assign(retVal, state);
			}
			if (tableLocation->getRow() == -1) {
				clearSelectionAndLeadAnchor();
			} else {
				int32_t var$0 = tableLocation->getRow();
				setRowSelectionInterval(var$0, tableLocation->getRow());
				int32_t var$1 = tableLocation->getColumn();
				setColumnSelectionInterval(var$1, tableLocation->getColumn());
			}
		}
	}
	$var($JTable$DropLocation, old, this->dropLocation);
	$set(this, dropLocation, tableLocation);
	firePropertyChange("dropLocation"_s, old, this->dropLocation);
	return retVal;
}

$JTable$DropLocation* JTable::getDropLocation() {
	return this->dropLocation;
}

void JTable::setAutoCreateRowSorter(bool autoCreateRowSorter) {
	$useLocalObjectStack();
	bool oldValue = this->autoCreateRowSorter;
	this->autoCreateRowSorter = autoCreateRowSorter;
	if (autoCreateRowSorter) {
		setRowSorter($$new($TableRowSorter, $(getModel())));
	}
	firePropertyChange("autoCreateRowSorter"_s, oldValue, autoCreateRowSorter);
}

bool JTable::getAutoCreateRowSorter() {
	return this->autoCreateRowSorter;
}

void JTable::setUpdateSelectionOnSort(bool update) {
	if (this->updateSelectionOnSort != update) {
		this->updateSelectionOnSort = update;
		firePropertyChange("updateSelectionOnSort"_s, !update, update);
	}
}

bool JTable::getUpdateSelectionOnSort() {
	return this->updateSelectionOnSort;
}

void JTable::setRowSorter($RowSorter* sorter) {
	$var($RowSorter, oldRowSorter, nullptr);
	if (this->sortManager != nullptr) {
		$assign(oldRowSorter, this->sortManager->sorter);
		this->sortManager->dispose();
		$set(this, sortManager, nullptr);
	}
	$set(this, rowModel, nullptr);
	clearSelectionAndLeadAnchor();
	if (sorter != nullptr) {
		$set(this, sortManager, $new($JTable$SortManager, this, sorter));
	}
	resizeAndRepaint();
	firePropertyChange("rowSorter"_s, oldRowSorter, sorter);
	firePropertyChange("sorter"_s, oldRowSorter, sorter);
}

$RowSorter* JTable::getRowSorter() {
	return (this->sortManager != nullptr) ? this->sortManager->sorter : ($RowSorter*)nullptr;
}

void JTable::setSelectionMode(int32_t selectionMode) {
	$useLocalObjectStack();
	clearSelection();
	$$nc(getSelectionModel())->setSelectionMode(selectionMode);
	$$nc($$nc(getColumnModel())->getSelectionModel())->setSelectionMode(selectionMode);
}

void JTable::setRowSelectionAllowed(bool rowSelectionAllowed) {
	bool old = this->rowSelectionAllowed;
	this->rowSelectionAllowed = rowSelectionAllowed;
	if (old != rowSelectionAllowed) {
		repaint();
	}
	firePropertyChange("rowSelectionAllowed"_s, old, rowSelectionAllowed);
}

bool JTable::getRowSelectionAllowed() {
	return this->rowSelectionAllowed;
}

void JTable::setColumnSelectionAllowed(bool columnSelectionAllowed) {
	bool old = $nc(this->columnModel)->getColumnSelectionAllowed();
	$nc(this->columnModel)->setColumnSelectionAllowed(columnSelectionAllowed);
	if (old != columnSelectionAllowed) {
		repaint();
	}
	firePropertyChange("columnSelectionAllowed"_s, old, columnSelectionAllowed);
}

bool JTable::getColumnSelectionAllowed() {
	return $nc(this->columnModel)->getColumnSelectionAllowed();
}

void JTable::setCellSelectionEnabled(bool cellSelectionEnabled) {
	setRowSelectionAllowed(cellSelectionEnabled);
	setColumnSelectionAllowed(cellSelectionEnabled);
	bool old = this->cellSelectionEnabled;
	this->cellSelectionEnabled = cellSelectionEnabled;
	firePropertyChange("cellSelectionEnabled"_s, old, cellSelectionEnabled);
}

bool JTable::getCellSelectionEnabled() {
	bool var$0 = getRowSelectionAllowed();
	return var$0 && getColumnSelectionAllowed();
}

void JTable::selectAll() {
	if (isEditing()) {
		removeEditor();
	}
	bool var$0 = getRowCount() > 0;
	if (var$0 && getColumnCount() > 0) {
		int32_t oldLead = 0;
		int32_t oldAnchor = 0;
		$var($ListSelectionModel, selModel, nullptr);
		$assign(selModel, this->selectionModel);
		$nc(selModel)->setValueIsAdjusting(true);
		oldLead = getAdjustedIndex(selModel->getLeadSelectionIndex(), true);
		oldAnchor = getAdjustedIndex(selModel->getAnchorSelectionIndex(), true);
		setRowSelectionInterval(0, getRowCount() - 1);
		$SwingUtilities2::setLeadAnchorWithoutSelection(selModel, oldLead, oldAnchor);
		selModel->setValueIsAdjusting(false);
		$assign(selModel, $nc(this->columnModel)->getSelectionModel());
		$nc(selModel)->setValueIsAdjusting(true);
		oldLead = getAdjustedIndex(selModel->getLeadSelectionIndex(), false);
		oldAnchor = getAdjustedIndex(selModel->getAnchorSelectionIndex(), false);
		setColumnSelectionInterval(0, getColumnCount() - 1);
		$SwingUtilities2::setLeadAnchorWithoutSelection(selModel, oldLead, oldAnchor);
		selModel->setValueIsAdjusting(false);
	}
}

void JTable::clearSelection() {
	$nc(this->selectionModel)->clearSelection();
	$$nc($nc(this->columnModel)->getSelectionModel())->clearSelection();
}

void JTable::clearSelectionAndLeadAnchor() {
	$useLocalObjectStack();
	$nc(this->selectionModel)->setValueIsAdjusting(true);
	$$nc($nc(this->columnModel)->getSelectionModel())->setValueIsAdjusting(true);
	clearSelection();
	$nc(this->selectionModel)->setAnchorSelectionIndex(-1);
	$nc(this->selectionModel)->setLeadSelectionIndex(-1);
	$$nc($nc(this->columnModel)->getSelectionModel())->setAnchorSelectionIndex(-1);
	$$nc($nc(this->columnModel)->getSelectionModel())->setLeadSelectionIndex(-1);
	$nc(this->selectionModel)->setValueIsAdjusting(false);
	$$nc($nc(this->columnModel)->getSelectionModel())->setValueIsAdjusting(false);
}

int32_t JTable::getAdjustedIndex(int32_t index, bool row) {
	int32_t compare = row ? getRowCount() : getColumnCount();
	return index < compare ? index : -1;
}

int32_t JTable::boundRow(int32_t row) {
	if (row < 0 || row >= getRowCount()) {
		$throwNew($IllegalArgumentException, "Row index out of range"_s);
	}
	return row;
}

int32_t JTable::boundColumn(int32_t col) {
	if (col < 0 || col >= getColumnCount()) {
		$throwNew($IllegalArgumentException, "Column index out of range"_s);
	}
	return col;
}

void JTable::setRowSelectionInterval(int32_t index0, int32_t index1) {
	int32_t var$0 = boundRow(index0);
	$nc(this->selectionModel)->setSelectionInterval(var$0, boundRow(index1));
}

void JTable::setColumnSelectionInterval(int32_t index0, int32_t index1) {
	int32_t var$0 = boundColumn(index0);
	$$nc($nc(this->columnModel)->getSelectionModel())->setSelectionInterval(var$0, boundColumn(index1));
}

void JTable::addRowSelectionInterval(int32_t index0, int32_t index1) {
	int32_t var$0 = boundRow(index0);
	$nc(this->selectionModel)->addSelectionInterval(var$0, boundRow(index1));
}

void JTable::addColumnSelectionInterval(int32_t index0, int32_t index1) {
	int32_t var$0 = boundColumn(index0);
	$$nc($nc(this->columnModel)->getSelectionModel())->addSelectionInterval(var$0, boundColumn(index1));
}

void JTable::removeRowSelectionInterval(int32_t index0, int32_t index1) {
	int32_t var$0 = boundRow(index0);
	$nc(this->selectionModel)->removeSelectionInterval(var$0, boundRow(index1));
}

void JTable::removeColumnSelectionInterval(int32_t index0, int32_t index1) {
	int32_t var$0 = boundColumn(index0);
	$$nc($nc(this->columnModel)->getSelectionModel())->removeSelectionInterval(var$0, boundColumn(index1));
}

int32_t JTable::getSelectedRow() {
	return $nc(this->selectionModel)->getMinSelectionIndex();
}

int32_t JTable::getSelectedColumn() {
	return $$nc($nc(this->columnModel)->getSelectionModel())->getMinSelectionIndex();
}

$ints* JTable::getSelectedRows() {
	return $nc(this->selectionModel)->getSelectedIndices();
}

$ints* JTable::getSelectedColumns() {
	return $nc(this->columnModel)->getSelectedColumns();
}

int32_t JTable::getSelectedRowCount() {
	return $nc(this->selectionModel)->getSelectedItemsCount();
}

int32_t JTable::getSelectedColumnCount() {
	return $nc(this->columnModel)->getSelectedColumnCount();
}

bool JTable::isRowSelected(int32_t row) {
	return $nc(this->selectionModel)->isSelectedIndex(row);
}

bool JTable::isColumnSelected(int32_t column) {
	return $$nc($nc(this->columnModel)->getSelectionModel())->isSelectedIndex(column);
}

bool JTable::isCellSelected(int32_t row, int32_t column) {
	bool var$0 = !getRowSelectionAllowed();
	if (var$0 && !getColumnSelectionAllowed()) {
		return false;
	}
	bool var$2 = !getRowSelectionAllowed();
	bool var$1 = var$2 || isRowSelected(row);
	if (var$1) {
		bool var$3 = !getColumnSelectionAllowed();
		var$1 = var$3 || isColumnSelected(column);
	}
	return var$1;
}

void JTable::changeSelectionModel($ListSelectionModel* sm, int32_t index, bool toggle, bool extend, bool selected, int32_t anchor, bool anchorSelected) {
	if (extend) {
		if (toggle) {
			if (anchorSelected) {
				$nc(sm)->addSelectionInterval(anchor, index);
			} else {
				$nc(sm)->removeSelectionInterval(anchor, index);
				if ($equals($Boolean::TRUE, getClientProperty("Table.isFileList"_s))) {
					sm->addSelectionInterval(index, index);
					sm->setAnchorSelectionIndex(anchor);
				}
			}
		} else {
			$nc(sm)->setSelectionInterval(anchor, index);
		}
	} else if (toggle) {
		if (selected) {
			$nc(sm)->removeSelectionInterval(index, index);
		} else {
			$nc(sm)->addSelectionInterval(index, index);
		}
	} else {
		$nc(sm)->setSelectionInterval(index, index);
	}
}

void JTable::changeSelection(int32_t rowIndex, int32_t columnIndex, bool toggle, bool extend) {
	$useLocalObjectStack();
	$var($ListSelectionModel, rsm, getSelectionModel());
	$var($ListSelectionModel, csm, $$nc(getColumnModel())->getSelectionModel());
	int32_t anchorRow = getAdjustedIndex($nc(rsm)->getAnchorSelectionIndex(), true);
	int32_t anchorCol = getAdjustedIndex($nc(csm)->getAnchorSelectionIndex(), false);
	bool anchorSelected = true;
	if (anchorRow == -1) {
		if (getRowCount() > 0) {
			anchorRow = 0;
		}
		anchorSelected = false;
	}
	if (anchorCol == -1) {
		if (getColumnCount() > 0) {
			anchorCol = 0;
		}
		anchorSelected = false;
	}
	bool selected = isCellSelected(rowIndex, columnIndex);
	anchorSelected = anchorSelected && isCellSelected(anchorRow, anchorCol);
	changeSelectionModel(csm, columnIndex, toggle, extend, selected, anchorCol, anchorSelected);
	changeSelectionModel(rsm, rowIndex, toggle, extend, selected, anchorRow, anchorSelected);
	if (getAutoscrolls()) {
		$var($Rectangle, cellRect, getCellRect(rowIndex, columnIndex, false));
		if (cellRect != nullptr) {
			scrollRectToVisible(cellRect);
		}
	}
}

$Color* JTable::getSelectionForeground() {
	return this->selectionForeground;
}

void JTable::setSelectionForeground($Color* selectionForeground) {
	$var($Color, old, this->selectionForeground);
	$set(this, selectionForeground, selectionForeground);
	firePropertyChange("selectionForeground"_s, old, selectionForeground);
	repaint();
}

$Color* JTable::getSelectionBackground() {
	return this->selectionBackground;
}

void JTable::setSelectionBackground($Color* selectionBackground) {
	$var($Color, old, this->selectionBackground);
	$set(this, selectionBackground, selectionBackground);
	firePropertyChange("selectionBackground"_s, old, selectionBackground);
	repaint();
}

$TableColumn* JTable::getColumn(Object$* identifier) {
	$var($TableColumnModel, cm, getColumnModel());
	int32_t columnIndex = $nc(cm)->getColumnIndex(identifier);
	return cm->getColumn(columnIndex);
}

int32_t JTable::convertColumnIndexToModel(int32_t viewColumnIndex) {
	return $SwingUtilities2::convertColumnIndexToModel($(getColumnModel()), viewColumnIndex);
}

int32_t JTable::convertColumnIndexToView(int32_t modelColumnIndex) {
	return $SwingUtilities2::convertColumnIndexToView($(getColumnModel()), modelColumnIndex);
}

int32_t JTable::convertRowIndexToView(int32_t modelRowIndex) {
	$var($RowSorter, sorter, getRowSorter());
	if (sorter != nullptr) {
		return sorter->convertRowIndexToView(modelRowIndex);
	}
	return modelRowIndex;
}

int32_t JTable::convertRowIndexToModel(int32_t viewRowIndex) {
	$var($RowSorter, sorter, getRowSorter());
	if (sorter != nullptr) {
		return sorter->convertRowIndexToModel(viewRowIndex);
	}
	return viewRowIndex;
}

int32_t JTable::getRowCount() {
	$useLocalObjectStack();
	$var($RowSorter, sorter, getRowSorter());
	if (sorter != nullptr) {
		return sorter->getViewRowCount();
	}
	return $$nc(getModel())->getRowCount();
}

int32_t JTable::getColumnCount() {
	return $$nc(getColumnModel())->getColumnCount();
}

$String* JTable::getColumnName(int32_t column) {
	return $$nc(getModel())->getColumnName(convertColumnIndexToModel(column));
}

$Class* JTable::getColumnClass(int32_t column) {
	return $$nc(getModel())->getColumnClass(convertColumnIndexToModel(column));
}

$Object* JTable::getValueAt(int32_t row, int32_t column) {
	int32_t var$0 = convertRowIndexToModel(row);
	return $$nc(getModel())->getValueAt(var$0, convertColumnIndexToModel(column));
}

void JTable::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	int32_t var$0 = convertRowIndexToModel(row);
	$$nc(getModel())->setValueAt(aValue, var$0, convertColumnIndexToModel(column));
}

bool JTable::isCellEditable(int32_t row, int32_t column) {
	int32_t var$0 = convertRowIndexToModel(row);
	return $$nc(getModel())->isCellEditable(var$0, convertColumnIndexToModel(column));
}

void JTable::addColumn($TableColumn* aColumn) {
	$useLocalObjectStack();
	if ($nc(aColumn)->getHeaderValue() == nullptr) {
		int32_t modelColumn = aColumn->getModelIndex();
		$var($String, columnName, $$nc(getModel())->getColumnName(modelColumn));
		aColumn->setHeaderValue(columnName);
	}
	$$nc(getColumnModel())->addColumn(aColumn);
}

void JTable::removeColumn($TableColumn* aColumn) {
	$$nc(getColumnModel())->removeColumn(aColumn);
}

void JTable::moveColumn(int32_t column, int32_t targetColumn) {
	$$nc(getColumnModel())->moveColumn(column, targetColumn);
}

int32_t JTable::columnAtPoint($Point* point) {
	$useLocalObjectStack();
	int32_t x = $nc(point)->x;
	if (!$$nc(getComponentOrientation())->isLeftToRight()) {
		x = getWidth() - x - 1;
	}
	return $$nc(getColumnModel())->getColumnIndexAtX(x);
}

int32_t JTable::rowAtPoint($Point* point) {
	int32_t y = $nc(point)->y;
	int32_t result = (this->rowModel == nullptr) ? $div(y, getRowHeight()) : this->rowModel->getIndex(y);
	if (result < 0) {
		return -1;
	} else if (result >= getRowCount()) {
		return -1;
	} else {
		return result;
	}
}

$Rectangle* JTable::getCellRect(int32_t row, int32_t column, bool includeSpacing) {
	$useLocalObjectStack();
	$var($Rectangle, r, $new($Rectangle));
	bool valid = true;
	if (row < 0) {
		valid = false;
	} else if (row >= getRowCount()) {
		r->y = getHeight();
		valid = false;
	} else {
		r->height = getRowHeight(row);
		r->y = (this->rowModel == nullptr) ? row * r->height : this->rowModel->getPosition(row);
	}
	if (column < 0) {
		if (!$$nc(getComponentOrientation())->isLeftToRight()) {
			r->x = getWidth();
		}
		valid = false;
	} else if (column >= getColumnCount()) {
		if ($$nc(getComponentOrientation())->isLeftToRight()) {
			r->x = getWidth();
		}
		valid = false;
	} else {
		$var($TableColumnModel, cm, getColumnModel());
		if ($$nc(getComponentOrientation())->isLeftToRight()) {
			for (int32_t i = 0; i < column; ++i) {
				r->x += $$nc($nc(cm)->getColumn(i))->getWidth();
			}
		} else {
			for (int32_t i = $nc(cm)->getColumnCount() - 1; i > column; --i) {
				r->x += $$nc(cm->getColumn(i))->getWidth();
			}
		}
		r->width = $$nc($nc(cm)->getColumn(column))->getWidth();
	}
	if (valid && !includeSpacing) {
		int32_t rm = $Math::min(getRowMargin(), r->height);
		int32_t cm = $Math::min($$nc(getColumnModel())->getColumnMargin(), r->width);
		r->setBounds(r->x + cm / 2, r->y + rm / 2, r->width - cm, r->height - rm);
	}
	return r;
}

int32_t JTable::viewIndexForColumn($TableColumn* aColumn) {
	$var($TableColumnModel, cm, getColumnModel());
	for (int32_t column = 0; column < $nc(cm)->getColumnCount(); ++column) {
		if (cm->getColumn(column) == aColumn) {
			return column;
		}
	}
	return -1;
}

void JTable::doLayout() {
	$useLocalObjectStack();
	$var($TableColumn, resizingColumn, getResizingColumn());
	if (resizingColumn == nullptr) {
		setWidthsFromPreferredWidths(false);
	} else {
		int32_t columnIndex = viewIndexForColumn(resizingColumn);
		int32_t var$0 = getWidth();
		int32_t delta = var$0 - $$nc(getColumnModel())->getTotalColumnWidth();
		accommodateDelta(columnIndex, delta);
		int32_t var$1 = getWidth();
		delta = var$1 - $$nc(getColumnModel())->getTotalColumnWidth();
		if (delta != 0) {
			resizingColumn->setWidth(resizingColumn->getWidth() + delta);
		}
		setWidthsFromPreferredWidths(true);
	}
	$JComponent::doLayout();
}

$TableColumn* JTable::getResizingColumn() {
	return (this->tableHeader == nullptr) ? ($TableColumn*)nullptr : this->tableHeader->getResizingColumn();
}

void JTable::sizeColumnsToFit(bool lastColumnOnly) {
	int32_t oldAutoResizeMode = this->autoResizeMode;
	setAutoResizeMode(lastColumnOnly ? JTable::AUTO_RESIZE_LAST_COLUMN : JTable::AUTO_RESIZE_ALL_COLUMNS);
	sizeColumnsToFit(-1);
	setAutoResizeMode(oldAutoResizeMode);
}

void JTable::sizeColumnsToFit(int32_t resizingColumn) {
	$useLocalObjectStack();
	if (resizingColumn == -1) {
		setWidthsFromPreferredWidths(false);
	} else if (this->autoResizeMode == JTable::AUTO_RESIZE_OFF) {
		$var($TableColumn, aColumn, $$nc(getColumnModel())->getColumn(resizingColumn));
		$nc(aColumn)->setPreferredWidth($nc(aColumn)->getWidth());
	} else {
		int32_t var$0 = getWidth();
		int32_t delta = var$0 - $$nc(getColumnModel())->getTotalColumnWidth();
		accommodateDelta(resizingColumn, delta);
		setWidthsFromPreferredWidths(true);
	}
}

void JTable::setWidthsFromPreferredWidths(bool inverse) {
	$useLocalObjectStack();
	int32_t totalWidth = getWidth();
	int32_t totalPreferred = $nc($(getPreferredSize()))->width;
	int32_t target = !inverse ? totalWidth : totalPreferred;
	$var($TableColumnModel, cm, this->columnModel);
	$var($JTable$Resizable3, r, $new($JTable$2, this, cm, inverse));
	adjustSizes(target, r, inverse);
}

void JTable::accommodateDelta(int32_t resizingColumnIndex, int32_t delta) {
	$useLocalObjectStack();
	int32_t columnCount = getColumnCount();
	int32_t from = resizingColumnIndex;
	int32_t to = 0;
	switch (this->autoResizeMode) {
	case JTable::AUTO_RESIZE_NEXT_COLUMN:
		from = from + 1;
		to = $Math::min(from + 1, columnCount);
		break;
	case JTable::AUTO_RESIZE_SUBSEQUENT_COLUMNS:
		from = from + 1;
		to = columnCount;
		break;
	case JTable::AUTO_RESIZE_LAST_COLUMN:
		from = columnCount - 1;
		to = from + 1;
		break;
	case JTable::AUTO_RESIZE_ALL_COLUMNS:
		from = 0;
		to = columnCount;
		break;
	default:
		return;
	}
	int32_t start = from;
	int32_t end = to;
	$var($TableColumnModel, cm, this->columnModel);
	$var($JTable$Resizable3, r, $new($JTable$3, this, end, start, cm));
	int32_t totalWidth = 0;
	for (int32_t i = from; i < to; ++i) {
		$var($TableColumn, aColumn, $nc(this->columnModel)->getColumn(i));
		int32_t input = $nc(aColumn)->getWidth();
		totalWidth = totalWidth + input;
	}
	adjustSizes(totalWidth + delta, r, false);
}

void JTable::adjustSizes(int64_t target, $JTable$Resizable3* r, bool inverse) {
	int32_t N = $nc(r)->getElementCount();
	int64_t totalPreferred = 0;
	for (int32_t i = 0; i < N; ++i) {
		totalPreferred += r->getMidPointAt(i);
	}
	$var($JTable$Resizable2, s, nullptr);
	if ((target < totalPreferred) == !inverse) {
		$assign(s, $new($JTable$4, this, r));
	} else {
		$assign(s, $new($JTable$5, this, r));
	}
	adjustSizes(target, s, !inverse);
}

void JTable::adjustSizes(int64_t target, $JTable$Resizable2* r, bool limitToRange) {
	int64_t totalLowerBound = 0;
	int64_t totalUpperBound = 0;
	for (int32_t i = 0; i < $nc(r)->getElementCount(); ++i) {
		totalLowerBound += r->getLowerBoundAt(i);
		totalUpperBound += r->getUpperBoundAt(i);
	}
	if (limitToRange) {
		target = $Math::min($Math::max(totalLowerBound, target), totalUpperBound);
	}
	for (int32_t i = 0; i < r->getElementCount(); ++i) {
		int32_t lowerBound = r->getLowerBoundAt(i);
		int32_t upperBound = r->getUpperBoundAt(i);
		int32_t newSize = 0;
		if (totalLowerBound == totalUpperBound) {
			newSize = lowerBound;
		} else {
			double f = (double)(target - totalLowerBound) / (totalUpperBound - totalLowerBound);
			newSize = (int32_t)$Math::round(lowerBound + f * (upperBound - lowerBound));
		}
		r->setSizeAt(newSize, i);
		target -= newSize;
		totalLowerBound -= lowerBound;
		totalUpperBound -= upperBound;
	}
}

$String* JTable::getToolTipText($MouseEvent* event) {
	$useLocalObjectStack();
	$var($String, tip, nullptr);
	$var($Point, p, $nc(event)->getPoint());
	int32_t hitColumnIndex = columnAtPoint(p);
	int32_t hitRowIndex = rowAtPoint(p);
	if ((hitColumnIndex != -1) && (hitRowIndex != -1)) {
		$var($TableCellRenderer, renderer, getCellRenderer(hitRowIndex, hitColumnIndex));
		$var($Component, component, prepareRenderer(renderer, hitRowIndex, hitColumnIndex));
		if ($instanceOf($JComponent, component)) {
			$var($Rectangle, cellRect, getCellRect(hitRowIndex, hitColumnIndex, false));
			$nc(p)->translate(-$nc(cellRect)->x, -$nc(cellRect)->y);
			int32_t modifiers = event->getModifiers();
			int32_t var$0 = event->getID();
			int64_t var$1 = event->getWhen();
			int32_t var$2 = p->x;
			int32_t var$3 = p->y;
			int32_t var$4 = event->getXOnScreen();
			int32_t var$5 = event->getYOnScreen();
			int32_t var$6 = event->getClickCount();
			$var($MouseEvent, newEvent, $new($MouseEvent, component, var$0, var$1, modifiers, var$2, var$3, var$4, var$5, var$6, event->isPopupTrigger(), $MouseEvent::NOBUTTON));
			$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
			$nc(meAccessor)->setCausedByTouchEvent(newEvent, $nc(meAccessor)->isCausedByTouchEvent(event));
			$assign(tip, $cast($JComponent, component)->getToolTipText(newEvent));
		}
	}
	if (tip == nullptr) {
		$assign(tip, getToolTipText());
	}
	return tip;
}

void JTable::setSurrendersFocusOnKeystroke(bool surrendersFocusOnKeystroke) {
	this->surrendersFocusOnKeystroke = surrendersFocusOnKeystroke;
}

bool JTable::getSurrendersFocusOnKeystroke() {
	return this->surrendersFocusOnKeystroke;
}

bool JTable::editCellAt(int32_t row, int32_t column) {
	return editCellAt(row, column, nullptr);
}

bool JTable::editCellAt(int32_t row, int32_t column, $EventObject* e) {
	$useLocalObjectStack();
	if (this->cellEditor != nullptr && !this->cellEditor->stopCellEditing()) {
		return false;
	}
	bool var$0 = row < 0 || row >= getRowCount() || column < 0;
	if (var$0 || column >= getColumnCount()) {
		return false;
	}
	if (!isCellEditable(row, column)) {
		return false;
	}
	if (this->editorRemover == nullptr) {
		$var($KeyboardFocusManager, fm, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
		$set(this, editorRemover, $new($JTable$CellEditorRemover, this, fm));
		$nc(fm)->addPropertyChangeListener("permanentFocusOwner"_s, this->editorRemover);
	}
	$var($TableCellEditor, editor, getCellEditor(row, column));
	if (editor != nullptr && editor->isCellEditable(e)) {
		$set(this, editorComp, prepareEditor(editor, row, column));
		if (this->editorComp == nullptr) {
			removeEditor();
			return false;
		}
		$nc(this->editorComp)->setBounds($(getCellRect(row, column, false)));
		add(this->editorComp);
		$nc(this->editorComp)->validate();
		$nc(this->editorComp)->repaint();
		setCellEditor(editor);
		setEditingRow(row);
		setEditingColumn(column);
		editor->addCellEditorListener(this);
		return true;
	}
	return false;
}

bool JTable::isEditing() {
	return this->cellEditor != nullptr;
}

$Component* JTable::getEditorComponent() {
	return this->editorComp;
}

int32_t JTable::getEditingColumn() {
	return this->editingColumn;
}

int32_t JTable::getEditingRow() {
	return this->editingRow;
}

$ComponentUI* JTable::getUI() {
	return $cast($TableUI, this->ui);
}

void JTable::setUI($TableUI* ui) {
	if (!$equals(this->ui, ui)) {
		$JComponent::setUI(ui);
		repaint();
	}
}

void JTable::updateUI() {
	$useLocalObjectStack();
	if (this->updateInProgress) {
		return;
	}
	this->updateInProgress = true;
	$var($Throwable, var$0, nullptr);
	try {
		$var($TableColumnModel, cm, getColumnModel());
		for (int32_t column = 0; column < $nc(cm)->getColumnCount(); ++column) {
			$var($TableColumn, aColumn, cm->getColumn(column));
			$SwingUtilities::updateRendererOrEditorUI($($nc(aColumn)->getCellRenderer()));
			$SwingUtilities::updateRendererOrEditorUI($(aColumn->getCellEditor()));
			$SwingUtilities::updateRendererOrEditorUI($(aColumn->getHeaderRenderer()));
		}
		$var($Enumeration, defaultRenderers, $nc(this->defaultRenderersByColumnClass)->elements());
		while ($nc(defaultRenderers)->hasMoreElements()) {
			$SwingUtilities::updateRendererOrEditorUI($(defaultRenderers->nextElement()));
		}
		$var($Enumeration, defaultEditors, $nc(this->defaultEditorsByColumnClass)->elements());
		while ($nc(defaultEditors)->hasMoreElements()) {
			$SwingUtilities::updateRendererOrEditorUI($(defaultEditors->nextElement()));
		}
		if (this->tableHeader != nullptr && this->tableHeader->getParent() == nullptr) {
			this->tableHeader->updateUI();
		}
		configureEnclosingScrollPaneUI();
		setUI($$cast($TableUI, $UIManager::getUI(this)));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->updateInProgress = false;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$String* JTable::getUIClassID() {
	return JTable::uiClassID;
}

void JTable::setModel($TableModel* dataModel) {
	$useLocalObjectStack();
	if (dataModel == nullptr) {
		$throwNew($IllegalArgumentException, "Cannot set a null TableModel"_s);
	}
	if (this->dataModel != dataModel) {
		$var($TableModel, old, this->dataModel);
		if (old != nullptr) {
			old->removeTableModelListener(this);
		}
		$set(this, dataModel, dataModel);
		$nc(dataModel)->addTableModelListener(this);
		tableChanged($$new($TableModelEvent, dataModel, $TableModelEvent::HEADER_ROW));
		firePropertyChange("model"_s, old, dataModel);
		if (getAutoCreateRowSorter()) {
			setRowSorter($$new($TableRowSorter, dataModel));
		}
	}
}

$TableModel* JTable::getModel() {
	return this->dataModel;
}

void JTable::setColumnModel($TableColumnModel* columnModel) {
	if (columnModel == nullptr) {
		$throwNew($IllegalArgumentException, "Cannot set a null ColumnModel"_s);
	}
	$var($TableColumnModel, old, this->columnModel);
	if (columnModel != old) {
		if (old != nullptr) {
			old->removeColumnModelListener(this);
		}
		$set(this, columnModel, columnModel);
		$nc(columnModel)->addColumnModelListener(this);
		if (this->tableHeader != nullptr) {
			this->tableHeader->setColumnModel(columnModel);
		}
		firePropertyChange("columnModel"_s, old, columnModel);
		resizeAndRepaint();
	}
}

$TableColumnModel* JTable::getColumnModel() {
	return this->columnModel;
}

void JTable::setSelectionModel($ListSelectionModel* selectionModel) {
	if (selectionModel == nullptr) {
		$throwNew($IllegalArgumentException, "Cannot set a null SelectionModel"_s);
	}
	$var($ListSelectionModel, oldModel, this->selectionModel);
	if (selectionModel != oldModel) {
		if (oldModel != nullptr) {
			oldModel->removeListSelectionListener(this);
		}
		$set(this, selectionModel, selectionModel);
		$nc(selectionModel)->addListSelectionListener(this);
		firePropertyChange("selectionModel"_s, oldModel, selectionModel);
		repaint();
	}
}

$ListSelectionModel* JTable::getSelectionModel() {
	return this->selectionModel;
}

void JTable::sorterChanged($RowSorterEvent* e) {
	$init($RowSorterEvent$Type);
	if ($nc(e)->getType() == $RowSorterEvent$Type::SORT_ORDER_CHANGED) {
		$var($JTableHeader, header, getTableHeader());
		if (header != nullptr) {
			header->repaint();
		}
	} else if (e->getType() == $RowSorterEvent$Type::SORTED) {
		this->sorterChanged$ = true;
		if (!this->ignoreSortChange) {
			sortedTableChanged(e, nullptr);
		}
	}
}

void JTable::sortedTableChanged($RowSorterEvent* sortedEvent, $TableModelEvent* e) {
	int32_t editingModelIndex = -1;
	$var($JTable$ModelChange, change, (e != nullptr) ? $new($JTable$ModelChange, this, e) : ($JTable$ModelChange*)nullptr);
	if ((change == nullptr || !change->allRowsChanged) && this->editingRow != -1) {
		editingModelIndex = convertRowIndexToModel(sortedEvent, this->editingRow);
	}
	$nc(this->sortManager)->prepareForChange(sortedEvent, change);
	if (e != nullptr) {
		if ($nc(change)->type == $TableModelEvent::UPDATE) {
			repaintSortedRows(change);
		}
		notifySorter(change);
		if (change->type != $TableModelEvent::UPDATE) {
			this->sorterChanged$ = true;
		}
	} else {
		this->sorterChanged$ = true;
	}
	$nc(this->sortManager)->processChange(sortedEvent, change, this->sorterChanged$);
	if (this->sorterChanged$) {
		if (this->editingRow != -1) {
			int32_t newIndex = (editingModelIndex == -1) ? -1 : convertRowIndexToView(editingModelIndex, change);
			restoreSortingEditingRow(newIndex);
		}
		if (e == nullptr || $nc(change)->type != $TableModelEvent::UPDATE) {
			resizeAndRepaint();
		}
	}
	if (change != nullptr && change->allRowsChanged) {
		clearSelectionAndLeadAnchor();
		resizeAndRepaint();
	}
}

void JTable::repaintSortedRows($JTable$ModelChange* change) {
	$useLocalObjectStack();
	if ($nc(change)->startModelIndex > $nc(change)->endModelIndex || change->startModelIndex + 10 < change->endModelIndex) {
		repaint();
		return;
	}
	int32_t eventColumn = $nc(change->event)->getColumn();
	int32_t columnViewIndex = eventColumn;
	if (columnViewIndex == $TableModelEvent::ALL_COLUMNS) {
		columnViewIndex = 0;
	} else {
		columnViewIndex = convertColumnIndexToView(columnViewIndex);
		if (columnViewIndex == -1) {
			return;
		}
	}
	int32_t modelIndex = change->startModelIndex;
	while (modelIndex <= change->endModelIndex) {
		int32_t viewIndex = convertRowIndexToView(modelIndex++);
		if (viewIndex != -1) {
			$var($Rectangle, dirty, getCellRect(viewIndex, columnViewIndex, false));
			int32_t x = $nc(dirty)->x;
			int32_t w = dirty->width;
			if (eventColumn == $TableModelEvent::ALL_COLUMNS) {
				x = 0;
				w = getWidth();
			}
			repaint(x, dirty->y, w, dirty->height);
		}
	}
}

void JTable::restoreSortingSelection($ints* selection, int32_t lead, $JTable$ModelChange* change) {
	for (int32_t i = $nc(selection)->length - 1; i >= 0; --i) {
		selection->set(i, convertRowIndexToView(selection->get(i), change));
	}
	lead = convertRowIndexToView(lead, change);
	if (selection->length == 0 || (selection->length == 1 && selection->get(0) == getSelectedRow())) {
		return;
	}
	$nc(this->selectionModel)->setValueIsAdjusting(true);
	$nc(this->selectionModel)->clearSelection();
	for (int32_t i = selection->length - 1; i >= 0; --i) {
		if (selection->get(i) != -1) {
			$nc(this->selectionModel)->addSelectionInterval(selection->get(i), selection->get(i));
		}
	}
	$SwingUtilities2::setLeadAnchorWithoutSelection(this->selectionModel, lead, lead);
	$nc(this->selectionModel)->setValueIsAdjusting(false);
}

void JTable::restoreSortingEditingRow(int32_t editingRow) {
	if (editingRow == -1) {
		$var($TableCellEditor, editor, getCellEditor());
		if (editor != nullptr) {
			editor->cancelCellEditing();
			if (getCellEditor() != nullptr) {
				removeEditor();
			}
		}
	} else {
		this->editingRow = editingRow;
		repaint();
	}
}

void JTable::notifySorter($JTable$ModelChange* change) {
	$var($Throwable, var$0, nullptr);
	try {
		this->ignoreSortChange = true;
		this->sorterChanged$ = false;
		switch ($nc(change)->type) {
		case $TableModelEvent::UPDATE:
			if ($nc(change->event)->getLastRow() == $Integer::MAX_VALUE) {
				$nc($nc(this->sortManager)->sorter)->allRowsChanged();
			} else if ($nc(change->event)->getColumn() == $TableModelEvent::ALL_COLUMNS) {
				$nc($nc(this->sortManager)->sorter)->rowsUpdated(change->startModelIndex, change->endModelIndex);
			} else {
				$nc($nc(this->sortManager)->sorter)->rowsUpdated(change->startModelIndex, change->endModelIndex, $nc(change->event)->getColumn());
			}
			break;
		case $TableModelEvent::INSERT:
			$nc($nc(this->sortManager)->sorter)->rowsInserted(change->startModelIndex, change->endModelIndex);
			break;
		case $TableModelEvent::DELETE:
			$nc($nc(this->sortManager)->sorter)->rowsDeleted(change->startModelIndex, change->endModelIndex);
			break;
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->ignoreSortChange = false;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t JTable::convertRowIndexToView(int32_t modelIndex, $JTable$ModelChange* change) {
	if (modelIndex < 0) {
		return -1;
	}
	if (change != nullptr && modelIndex >= change->startModelIndex) {
		if (change->type == $TableModelEvent::INSERT) {
			if (modelIndex + change->length >= change->modelRowCount) {
				return -1;
			}
			return $nc($nc(this->sortManager)->sorter)->convertRowIndexToView(modelIndex + change->length);
		} else if (change->type == $TableModelEvent::DELETE) {
			if (modelIndex <= change->endModelIndex) {
				return -1;
			} else {
				if (modelIndex - change->length >= change->modelRowCount) {
					return -1;
				}
				return $nc($nc(this->sortManager)->sorter)->convertRowIndexToView(modelIndex - change->length);
			}
		}
	}
	if (modelIndex >= $$nc(getModel())->getRowCount()) {
		return -1;
	}
	return $nc($nc(this->sortManager)->sorter)->convertRowIndexToView(modelIndex);
}

$ints* JTable::convertSelectionToModel($RowSorterEvent* e) {
	$var($ints, selection, getSelectedRows());
	for (int32_t i = $nc(selection)->length - 1; i >= 0; --i) {
		selection->set(i, convertRowIndexToModel(e, selection->get(i)));
	}
	return selection;
}

int32_t JTable::convertRowIndexToModel($RowSorterEvent* e, int32_t viewIndex) {
	if (e != nullptr) {
		if (e->getPreviousRowCount() == 0) {
			return viewIndex;
		}
		return e->convertPreviousRowIndexToModel(viewIndex);
	}
	if (viewIndex < 0 || viewIndex >= getRowCount()) {
		return -1;
	}
	return convertRowIndexToModel(viewIndex);
}

void JTable::tableChanged($TableModelEvent* e) {
	$useLocalObjectStack();
	if (e == nullptr || e->getFirstRow() == $TableModelEvent::HEADER_ROW) {
		clearSelectionAndLeadAnchor();
		$set(this, rowModel, nullptr);
		if (this->sortManager != nullptr) {
			$var($Throwable, var$0, nullptr);
			try {
				this->ignoreSortChange = true;
				$nc(this->sortManager->sorter)->modelStructureChanged();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->ignoreSortChange = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			$nc(this->sortManager)->allChanged();
		}
		if (getAutoCreateColumnsFromModel()) {
			createDefaultColumnsFromModel();
			return;
		}
		resizeAndRepaint();
		return;
	}
	if (this->sortManager != nullptr) {
		sortedTableChanged(nullptr, e);
		return;
	}
	if (this->rowModel != nullptr) {
		repaint();
	}
	if ($nc(e)->getType() == $TableModelEvent::INSERT) {
		tableRowsInserted(e);
		return;
	}
	if (e->getType() == $TableModelEvent::DELETE) {
		tableRowsDeleted(e);
		return;
	}
	int32_t modelColumn = e->getColumn();
	int32_t start = e->getFirstRow();
	int32_t end = e->getLastRow();
	$var($Rectangle, dirtyRegion, nullptr);
	if (modelColumn == $TableModelEvent::ALL_COLUMNS) {
		int32_t var$2 = start * getRowHeight();
		$assign(dirtyRegion, $new($Rectangle, 0, var$2, $$nc(getColumnModel())->getTotalColumnWidth(), 0));
	} else {
		int32_t column = convertColumnIndexToView(modelColumn);
		$assign(dirtyRegion, getCellRect(start, column, false));
	}
	if (end != $Integer::MAX_VALUE) {
		$nc(dirtyRegion)->height = (end - start + 1) * getRowHeight();
		repaint(dirtyRegion->x, dirtyRegion->y, dirtyRegion->width, dirtyRegion->height);
	} else {
		clearSelectionAndLeadAnchor();
		resizeAndRepaint();
		$set(this, rowModel, nullptr);
	}
}

void JTable::tableRowsInserted($TableModelEvent* e) {
	$useLocalObjectStack();
	int32_t start = $nc(e)->getFirstRow();
	int32_t end = e->getLastRow();
	if (start < 0) {
		start = 0;
	}
	if (end < 0) {
		end = getRowCount() - 1;
	}
	int32_t length = end - start + 1;
	$nc(this->selectionModel)->insertIndexInterval(start, length, true);
	if (this->rowModel != nullptr) {
		this->rowModel->insertEntries(start, length, getRowHeight());
	}
	int32_t rh = getRowHeight();
	int32_t var$0 = start * rh;
	int32_t var$1 = $$nc(getColumnModel())->getTotalColumnWidth();
	$var($Rectangle, drawRect, $new($Rectangle, 0, var$0, var$1, (getRowCount() - start) * rh));
	revalidate();
	repaint(drawRect);
}

void JTable::tableRowsDeleted($TableModelEvent* e) {
	$useLocalObjectStack();
	int32_t start = $nc(e)->getFirstRow();
	int32_t end = e->getLastRow();
	if (start < 0) {
		start = 0;
	}
	if (end < 0) {
		end = getRowCount() - 1;
	}
	int32_t deletedCount = end - start + 1;
	int32_t previousRowCount = getRowCount() + deletedCount;
	$nc(this->selectionModel)->removeIndexInterval(start, end);
	if (this->rowModel != nullptr) {
		this->rowModel->removeEntries(start, deletedCount);
	}
	int32_t rh = getRowHeight();
	$var($Rectangle, drawRect, $new($Rectangle, 0, start * rh, $$nc(getColumnModel())->getTotalColumnWidth(), (previousRowCount - start) * rh));
	revalidate();
	repaint(drawRect);
}

void JTable::columnAdded($TableColumnModelEvent* e) {
	if (isEditing()) {
		removeEditor();
	}
	resizeAndRepaint();
}

void JTable::columnRemoved($TableColumnModelEvent* e) {
	if (isEditing()) {
		removeEditor();
	}
	resizeAndRepaint();
}

void JTable::columnMoved($TableColumnModelEvent* e) {
	$useLocalObjectStack();
	bool var$0 = isEditing();
	if (var$0 && !$$nc(getCellEditor())->stopCellEditing()) {
		$$nc(getCellEditor())->cancelCellEditing();
	}
	repaint();
}

void JTable::columnMarginChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	bool var$0 = isEditing();
	if (var$0 && !$$nc(getCellEditor())->stopCellEditing()) {
		$$nc(getCellEditor())->cancelCellEditing();
	}
	$var($TableColumn, resizingColumn, getResizingColumn());
	if (resizingColumn != nullptr && this->autoResizeMode == JTable::AUTO_RESIZE_OFF) {
		resizingColumn->setPreferredWidth(resizingColumn->getWidth());
	}
	resizeAndRepaint();
}

int32_t JTable::limit(int32_t i, int32_t a, int32_t b) {
	return $Math::min(b, $Math::max(i, a));
}

void JTable::columnSelectionChanged($ListSelectionEvent* e) {
	$useLocalObjectStack();
	bool isAdjusting = $nc(e)->getValueIsAdjusting();
	if (this->columnSelectionAdjusting && !isAdjusting) {
		this->columnSelectionAdjusting = false;
		return;
	}
	this->columnSelectionAdjusting = isAdjusting;
	bool var$0 = getRowCount() <= 0;
	if (var$0 || getColumnCount() <= 0) {
		return;
	}
	int32_t var$1 = e->getFirstIndex();
	int32_t firstIndex = limit(var$1, 0, getColumnCount() - 1);
	int32_t var$2 = e->getLastIndex();
	int32_t lastIndex = limit(var$2, 0, getColumnCount() - 1);
	int32_t minRow = 0;
	int32_t maxRow = getRowCount() - 1;
	if (getRowSelectionAllowed()) {
		minRow = $nc(this->selectionModel)->getMinSelectionIndex();
		maxRow = $nc(this->selectionModel)->getMaxSelectionIndex();
		int32_t leadRow = getAdjustedIndex($nc(this->selectionModel)->getLeadSelectionIndex(), true);
		if (minRow == -1 || maxRow == -1) {
			if (leadRow == -1) {
				return;
			}
			minRow = (maxRow = leadRow);
		} else if (leadRow != -1) {
			minRow = $Math::min(minRow, leadRow);
			maxRow = $Math::max(maxRow, leadRow);
		}
	}
	$var($Rectangle, firstColumnRect, getCellRect(minRow, firstIndex, false));
	$var($Rectangle, lastColumnRect, getCellRect(maxRow, lastIndex, false));
	$var($Rectangle, dirtyRegion, $nc(firstColumnRect)->union$(lastColumnRect));
	repaint(dirtyRegion);
}

void JTable::valueChanged($ListSelectionEvent* e) {
	$useLocalObjectStack();
	if (this->sortManager != nullptr) {
		this->sortManager->viewSelectionChanged(e);
	}
	bool isAdjusting = $nc(e)->getValueIsAdjusting();
	if (this->rowSelectionAdjusting && !isAdjusting) {
		this->rowSelectionAdjusting = false;
		return;
	}
	this->rowSelectionAdjusting = isAdjusting;
	bool var$0 = getRowCount() <= 0;
	if (var$0 || getColumnCount() <= 0) {
		return;
	}
	int32_t var$1 = e->getFirstIndex();
	int32_t firstIndex = limit(var$1, 0, getRowCount() - 1);
	int32_t var$2 = e->getLastIndex();
	int32_t lastIndex = limit(var$2, 0, getRowCount() - 1);
	$var($Rectangle, firstRowRect, getCellRect(firstIndex, 0, false));
	$var($Rectangle, lastRowRect, getCellRect(lastIndex, getColumnCount() - 1, false));
	$var($Rectangle, dirtyRegion, $nc(firstRowRect)->union$(lastRowRect));
	repaint(dirtyRegion);
}

void JTable::editingStopped($ChangeEvent* e) {
	$useLocalObjectStack();
	$var($TableCellEditor, editor, getCellEditor());
	if (editor != nullptr) {
		$var($Object, value, editor->getCellEditorValue());
		setValueAt(value, this->editingRow, this->editingColumn);
		removeEditor();
	}
}

void JTable::editingCanceled($ChangeEvent* e) {
	removeEditor();
}

void JTable::setPreferredScrollableViewportSize($Dimension* size) {
	$set(this, preferredViewportSize, size);
}

$Dimension* JTable::getPreferredScrollableViewportSize() {
	return this->preferredViewportSize;
}

int32_t JTable::getScrollableUnitIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalObjectStack();
	int32_t leadingRow = 0;
	int32_t leadingCol = 0;
	$var($Rectangle, leadingCellRect, nullptr);
	int32_t leadingVisibleEdge = 0;
	int32_t leadingCellEdge = 0;
	int32_t leadingCellSize = 0;
	leadingRow = getLeadingRow(visibleRect);
	leadingCol = getLeadingCol(visibleRect);
	if (orientation == $SwingConstants::VERTICAL && leadingRow < 0) {
		return getRowHeight();
	} else if (orientation == $SwingConstants::HORIZONTAL && leadingCol < 0) {
		return 100;
	}
	$assign(leadingCellRect, getCellRect(leadingRow, leadingCol, true));
	leadingVisibleEdge = leadingEdge(visibleRect, orientation);
	leadingCellEdge = leadingEdge(leadingCellRect, orientation);
	if (orientation == $SwingConstants::VERTICAL) {
		leadingCellSize = $nc(leadingCellRect)->height;
	} else {
		leadingCellSize = $nc(leadingCellRect)->width;
	}
	if (leadingVisibleEdge == leadingCellEdge) {
		if (direction < 0) {
			int32_t retVal = 0;
			if (orientation == $SwingConstants::VERTICAL) {
				while (--leadingRow >= 0) {
					retVal = getRowHeight(leadingRow);
					if (retVal != 0) {
						break;
					}
				}
			} else {
				while (--leadingCol >= 0) {
					retVal = $nc($(getCellRect(leadingRow, leadingCol, true)))->width;
					if (retVal != 0) {
						break;
					}
				}
			}
			return retVal;
		} else {
			return leadingCellSize;
		}
	} else {
		int32_t hiddenAmt = $Math::abs(leadingVisibleEdge - leadingCellEdge);
		int32_t visibleAmt = leadingCellSize - hiddenAmt;
		if (direction > 0) {
			return visibleAmt;
		} else {
			return hiddenAmt;
		}
	}
}

int32_t JTable::getScrollableBlockIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalObjectStack();
	if (getRowCount() == 0) {
		if ($SwingConstants::VERTICAL == orientation) {
			int32_t rh = getRowHeight();
			return (rh > 0) ? $Math::max(rh, ($div($nc(visibleRect)->height, rh)) * rh) : $nc(visibleRect)->height;
		} else {
			return $nc(visibleRect)->width;
		}
	}
	if (nullptr == this->rowModel && $SwingConstants::VERTICAL == orientation) {
		int32_t row = rowAtPoint($($nc(visibleRect)->getLocation()));
		if (!JTable::$assertionsDisabled && !(row != -1)) {
			$throwNew($AssertionError);
		}
		int32_t col = columnAtPoint($(visibleRect->getLocation()));
		$var($Rectangle, cellRect, getCellRect(row, col, true));
		if ($nc(cellRect)->y == visibleRect->y) {
			int32_t rh = getRowHeight();
			if (!JTable::$assertionsDisabled && !(rh > 0)) {
				$throwNew($AssertionError);
			}
			return $Math::max(rh, ($div(visibleRect->height, rh)) * rh);
		}
	}
	if (direction < 0) {
		return getPreviousBlockIncrement(visibleRect, orientation);
	} else {
		return getNextBlockIncrement(visibleRect, orientation);
	}
}

int32_t JTable::getPreviousBlockIncrement($Rectangle* visibleRect, int32_t orientation) {
	$useLocalObjectStack();
	int32_t row = 0;
	int32_t col = 0;
	int32_t newEdge = 0;
	$var($Point, newCellLoc, nullptr);
	int32_t visibleLeadingEdge = leadingEdge(visibleRect, orientation);
	bool leftToRight = $$nc(getComponentOrientation())->isLeftToRight();
	int32_t newLeadingEdge = 0;
	if (orientation == $SwingConstants::VERTICAL) {
		newEdge = visibleLeadingEdge - $nc(visibleRect)->height;
		int32_t x = visibleRect->x + (leftToRight ? 0 : visibleRect->width);
		$assign(newCellLoc, $new($Point, x, newEdge));
	} else if (leftToRight) {
		newEdge = visibleLeadingEdge - $nc(visibleRect)->width;
		$assign(newCellLoc, $new($Point, newEdge, visibleRect->y));
	} else {
		newEdge = visibleLeadingEdge + $nc(visibleRect)->width;
		$assign(newCellLoc, $new($Point, newEdge - 1, visibleRect->y));
	}
	row = rowAtPoint(newCellLoc);
	col = columnAtPoint(newCellLoc);
	if ((orientation == $SwingConstants::VERTICAL) & (row < 0)) {
		newLeadingEdge = 0;
	} else if ((orientation == $SwingConstants::HORIZONTAL) & (col < 0)) {
		if (leftToRight) {
			newLeadingEdge = 0;
		} else {
			newLeadingEdge = getWidth();
		}
	} else {
		$var($Rectangle, newCellRect, getCellRect(row, col, true));
		int32_t newCellLeadingEdge = leadingEdge(newCellRect, orientation);
		int32_t newCellTrailingEdge = trailingEdge(newCellRect, orientation);
		if ((orientation == $SwingConstants::VERTICAL || leftToRight) && (newCellTrailingEdge >= visibleLeadingEdge)) {
			newLeadingEdge = newCellLeadingEdge;
		} else if (orientation == $SwingConstants::HORIZONTAL && !leftToRight && newCellTrailingEdge <= visibleLeadingEdge) {
			newLeadingEdge = newCellLeadingEdge;
		} else if (newEdge == newCellLeadingEdge) {
			newLeadingEdge = newCellLeadingEdge;
		} else {
			newLeadingEdge = newCellTrailingEdge;
		}
	}
	return $Math::abs(visibleLeadingEdge - newLeadingEdge);
}

int32_t JTable::getNextBlockIncrement($Rectangle* visibleRect, int32_t orientation) {
	$useLocalObjectStack();
	int32_t trailingRow = getTrailingRow(visibleRect);
	int32_t trailingCol = getTrailingCol(visibleRect);
	$var($Rectangle, cellRect, nullptr);
	bool cellFillsVis = false;
	int32_t cellLeadingEdge = 0;
	int32_t cellTrailingEdge = 0;
	int32_t newLeadingEdge = 0;
	int32_t visibleLeadingEdge = leadingEdge(visibleRect, orientation);
	if (orientation == $SwingConstants::VERTICAL && trailingRow < 0) {
		return $nc(visibleRect)->height;
	} else if (orientation == $SwingConstants::HORIZONTAL && trailingCol < 0) {
		return $nc(visibleRect)->width;
	}
	$assign(cellRect, getCellRect(trailingRow, trailingCol, true));
	cellLeadingEdge = leadingEdge(cellRect, orientation);
	cellTrailingEdge = trailingEdge(cellRect, orientation);
	if (orientation == $SwingConstants::VERTICAL || $$nc(getComponentOrientation())->isLeftToRight()) {
		cellFillsVis = cellLeadingEdge <= visibleLeadingEdge;
	} else {
		cellFillsVis = cellLeadingEdge >= visibleLeadingEdge;
	}
	if (cellFillsVis) {
		newLeadingEdge = cellTrailingEdge;
	} else if (cellTrailingEdge == trailingEdge(visibleRect, orientation)) {
		newLeadingEdge = cellTrailingEdge;
	} else {
		newLeadingEdge = cellLeadingEdge;
	}
	return $Math::abs(newLeadingEdge - visibleLeadingEdge);
}

int32_t JTable::getLeadingRow($Rectangle* visibleRect) {
	$useLocalObjectStack();
	$var($Point, leadingPoint, nullptr);
	if ($$nc(getComponentOrientation())->isLeftToRight()) {
		$assign(leadingPoint, $new($Point, $nc(visibleRect)->x, $nc(visibleRect)->y));
	} else {
		$assign(leadingPoint, $new($Point, $nc(visibleRect)->x + $nc(visibleRect)->width - 1, $nc(visibleRect)->y));
	}
	return rowAtPoint(leadingPoint);
}

int32_t JTable::getLeadingCol($Rectangle* visibleRect) {
	$useLocalObjectStack();
	$var($Point, leadingPoint, nullptr);
	if ($$nc(getComponentOrientation())->isLeftToRight()) {
		$assign(leadingPoint, $new($Point, $nc(visibleRect)->x, $nc(visibleRect)->y));
	} else {
		$assign(leadingPoint, $new($Point, $nc(visibleRect)->x + $nc(visibleRect)->width - 1, $nc(visibleRect)->y));
	}
	return columnAtPoint(leadingPoint);
}

int32_t JTable::getTrailingRow($Rectangle* visibleRect) {
	$useLocalObjectStack();
	$var($Point, trailingPoint, nullptr);
	if ($$nc(getComponentOrientation())->isLeftToRight()) {
		$assign(trailingPoint, $new($Point, $nc(visibleRect)->x, $nc(visibleRect)->y + $nc(visibleRect)->height - 1));
	} else {
		$assign(trailingPoint, $new($Point, $nc(visibleRect)->x + $nc(visibleRect)->width - 1, $nc(visibleRect)->y + $nc(visibleRect)->height - 1));
	}
	return rowAtPoint(trailingPoint);
}

int32_t JTable::getTrailingCol($Rectangle* visibleRect) {
	$useLocalObjectStack();
	$var($Point, trailingPoint, nullptr);
	if ($$nc(getComponentOrientation())->isLeftToRight()) {
		$assign(trailingPoint, $new($Point, $nc(visibleRect)->x + $nc(visibleRect)->width - 1, $nc(visibleRect)->y));
	} else {
		$assign(trailingPoint, $new($Point, $nc(visibleRect)->x, $nc(visibleRect)->y));
	}
	return columnAtPoint(trailingPoint);
}

int32_t JTable::leadingEdge($Rectangle* rect, int32_t orientation) {
	if (orientation == $SwingConstants::VERTICAL) {
		return $nc(rect)->y;
	} else if ($$nc(getComponentOrientation())->isLeftToRight()) {
		return $nc(rect)->x;
	} else {
		return $nc(rect)->x + $nc(rect)->width;
	}
}

int32_t JTable::trailingEdge($Rectangle* rect, int32_t orientation) {
	if (orientation == $SwingConstants::VERTICAL) {
		return $nc(rect)->y + $nc(rect)->height;
	} else if ($$nc(getComponentOrientation())->isLeftToRight()) {
		return $nc(rect)->x + $nc(rect)->width;
	} else {
		return $nc(rect)->x;
	}
}

bool JTable::getScrollableTracksViewportWidth() {
	return !(this->autoResizeMode == JTable::AUTO_RESIZE_OFF);
}

bool JTable::getScrollableTracksViewportHeight() {
	$useLocalObjectStack();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	bool var$0 = getFillsViewportHeight() && $instanceOf($JViewport, parent);
	if (var$0) {
		int32_t var$1 = parent->getHeight();
		var$0 = var$1 > $nc($(getPreferredSize()))->height;
	}
	return var$0;
}

void JTable::setFillsViewportHeight(bool fillsViewportHeight) {
	bool old = this->fillsViewportHeight;
	this->fillsViewportHeight = fillsViewportHeight;
	resizeAndRepaint();
	firePropertyChange("fillsViewportHeight"_s, old, fillsViewportHeight);
}

bool JTable::getFillsViewportHeight() {
	return this->fillsViewportHeight;
}

bool JTable::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$useLocalObjectStack();
	bool retValue = $JComponent::processKeyBinding(ks, e, condition, pressed);
	bool var$0 = !retValue && condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT && isFocusOwner();
	if (var$0 && !$nc($Boolean::FALSE)->equals($(getClientProperty("JTable.autoStartsEdit"_s)))) {
		$var($Component, editorComponent, getEditorComponent());
		if (editorComponent == nullptr) {
			if (e == nullptr || e->getID() != $KeyEvent::KEY_PRESSED) {
				return false;
			}
			int32_t code = $nc(e)->getKeyCode();
			if (code == $KeyEvent::VK_SHIFT || code == $KeyEvent::VK_CONTROL || code == $KeyEvent::VK_ALT || code == $KeyEvent::VK_META || code == $KeyEvent::VK_ALT_GRAPH) {
				return false;
			}
			int32_t leadRow = $$nc(getSelectionModel())->getLeadSelectionIndex();
			int32_t leadColumn = $$nc($$nc(getColumnModel())->getSelectionModel())->getLeadSelectionIndex();
			if (leadRow != -1 && leadColumn != -1 && !isEditing()) {
				if (!editCellAt(leadRow, leadColumn, e)) {
					return false;
				}
			}
			$assign(editorComponent, getEditorComponent());
			if (editorComponent == nullptr) {
				return false;
			}
		}
		if ($instanceOf($JComponent, editorComponent)) {
			retValue = $cast($JComponent, editorComponent)->processKeyBinding(ks, e, $JComponent::WHEN_FOCUSED, pressed);
			$var($Object, prop, getClientProperty("JTable.forceAutoStartsEdit"_s));
			bool var$1 = getSurrendersFocusOnKeystroke();
			if (var$1 || $nc($Boolean::TRUE)->equals(prop)) {
				editorComponent->requestFocus();
			}
		}
	}
	return retValue;
}

void JTable::createDefaultRenderers() {
	$useLocalObjectStack();
	$set(this, defaultRenderersByColumnClass, $new($UIDefaults, 8, 0.75f));
	this->defaultRenderersByColumnClass->put($Object::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$0)));
	this->defaultRenderersByColumnClass->put($Number::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$1$1)));
	this->defaultRenderersByColumnClass->put($Float::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$2$2)));
	this->defaultRenderersByColumnClass->put($Double::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$2$2)));
	$load($Date);
	this->defaultRenderersByColumnClass->put($Date::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$4$3)));
	$load($Icon);
	this->defaultRenderersByColumnClass->put($Icon::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$5$4)));
	$load($ImageIcon);
	this->defaultRenderersByColumnClass->put($ImageIcon::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$5$4)));
	this->defaultRenderersByColumnClass->put($Boolean::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultRenderers$7$5)));
}

void JTable::createDefaultEditors() {
	$useLocalObjectStack();
	$set(this, defaultEditorsByColumnClass, $new($UIDefaults, 3, 0.75f));
	this->defaultEditorsByColumnClass->put($Object::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultEditors$8$6)));
	this->defaultEditorsByColumnClass->put($Number::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultEditors$9$7)));
	this->defaultEditorsByColumnClass->put($Boolean::class$, $cast($UIDefaults$LazyValue, $$new(JTable$$Lambda$lambda$createDefaultEditors$10$8)));
}

void JTable::initializeLocalVars() {
	$useLocalObjectStack();
	this->updateSelectionOnSort = true;
	createDefaultRenderers();
	createDefaultEditors();
	setTableHeader($(createDefaultTableHeader()));
	setShowGrid(true);
	setAutoResizeMode(JTable::AUTO_RESIZE_SUBSEQUENT_COLUMNS);
	setRowHeight(16);
	this->isRowHeightSet = false;
	setRowMargin(1);
	setRowSelectionAllowed(true);
	setCellEditor(nullptr);
	setEditingColumn(-1);
	setEditingRow(-1);
	setSurrendersFocusOnKeystroke(false);
	setPreferredScrollableViewportSize($$new($Dimension, 450, 400));
	$var($ToolTipManager, toolTipManager, $ToolTipManager::sharedInstance());
	$nc(toolTipManager)->registerComponent(this);
	setAutoscrolls(true);
}

$TableModel* JTable::createDefaultDataModel() {
	return $new($DefaultTableModel);
}

$TableColumnModel* JTable::createDefaultColumnModel() {
	return $new($DefaultTableColumnModel);
}

$ListSelectionModel* JTable::createDefaultSelectionModel() {
	return $new($DefaultListSelectionModel);
}

$JTableHeader* JTable::createDefaultTableHeader() {
	return $new($JTableHeader, this->columnModel);
}

void JTable::resizeAndRepaint() {
	revalidate();
	repaint();
}

$TableCellEditor* JTable::getCellEditor() {
	return this->cellEditor;
}

void JTable::setCellEditor($TableCellEditor* anEditor) {
	$var($TableCellEditor, oldEditor, this->cellEditor);
	$set(this, cellEditor, anEditor);
	firePropertyChange("tableCellEditor"_s, oldEditor, anEditor);
}

void JTable::setEditingColumn(int32_t aColumn) {
	this->editingColumn = aColumn;
}

void JTable::setEditingRow(int32_t aRow) {
	this->editingRow = aRow;
}

$TableCellRenderer* JTable::getCellRenderer(int32_t row, int32_t column) {
	$useLocalObjectStack();
	$var($TableColumn, tableColumn, $$nc(getColumnModel())->getColumn(column));
	$var($TableCellRenderer, renderer, $nc(tableColumn)->getCellRenderer());
	if (renderer == nullptr) {
		$assign(renderer, getDefaultRenderer(getColumnClass(column)));
	}
	return renderer;
}

$Component* JTable::prepareRenderer($TableCellRenderer* renderer, int32_t row, int32_t column) {
	$useLocalObjectStack();
	$var($Object, value, getValueAt(row, column));
	bool isSelected = false;
	bool hasFocus = false;
	if (!isPaintingForPrint()) {
		isSelected = isCellSelected(row, column);
		bool rowIsLead = ($nc(this->selectionModel)->getLeadSelectionIndex() == row);
		bool colIsLead = ($$nc($nc(this->columnModel)->getSelectionModel())->getLeadSelectionIndex() == column);
		hasFocus = (rowIsLead && colIsLead) && isFocusOwner();
	}
	return $nc(renderer)->getTableCellRendererComponent(this, value, isSelected, hasFocus, row, column);
}

$TableCellEditor* JTable::getCellEditor(int32_t row, int32_t column) {
	$useLocalObjectStack();
	$var($TableColumn, tableColumn, $$nc(getColumnModel())->getColumn(column));
	$var($TableCellEditor, editor, $nc(tableColumn)->getCellEditor());
	if (editor == nullptr) {
		$assign(editor, getDefaultEditor(getColumnClass(column)));
	}
	return editor;
}

$Component* JTable::prepareEditor($TableCellEditor* editor, int32_t row, int32_t column) {
	$useLocalObjectStack();
	$var($Object, value, getValueAt(row, column));
	bool isSelected = isCellSelected(row, column);
	$var($Component, comp, $nc(editor)->getTableCellEditorComponent(this, value, isSelected, row, column));
	if ($instanceOf($JComponent, comp)) {
		$var($JComponent, jComp, $cast($JComponent, comp));
		if (jComp->getNextFocusableComponent() == nullptr) {
			jComp->setNextFocusableComponent(this);
		}
	}
	return comp;
}

void JTable::removeEditor() {
	$useLocalObjectStack();
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->removePropertyChangeListener("permanentFocusOwner"_s, this->editorRemover);
	$set(this, editorRemover, nullptr);
	$var($TableCellEditor, editor, getCellEditor());
	if (editor != nullptr) {
		editor->removeCellEditorListener(this);
		if (this->editorComp != nullptr) {
			$var($Component, focusOwner, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
			bool isFocusOwnerInTheTable = focusOwner != nullptr ? $SwingUtilities::isDescendingFrom(focusOwner, this) : false;
			remove(this->editorComp);
			if (isFocusOwnerInTheTable) {
				requestFocusInWindow();
			}
		}
		$var($Rectangle, cellRect, getCellRect(this->editingRow, this->editingColumn, false));
		setCellEditor(nullptr);
		setEditingColumn(-1);
		setEditingRow(-1);
		$set(this, editorComp, nullptr);
		repaint(cellRect);
	}
}

void JTable::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JTable::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

void JTable::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($TableModel, newDataModel, $cast($TableModel, $nc(f)->get("dataModel"_s, nullptr)));
	if (newDataModel == nullptr) {
		$throwNew($InvalidObjectException, "Null dataModel"_s);
	}
	$set(this, dataModel, newDataModel);
	$var($TableColumnModel, newColumnModel, $cast($TableColumnModel, f->get("columnModel"_s, nullptr)));
	if (newColumnModel == nullptr) {
		$throwNew($InvalidObjectException, "Null columnModel"_s);
	}
	$set(this, columnModel, newColumnModel);
	$var($ListSelectionModel, newSelectionModel, $cast($ListSelectionModel, f->get("selectionModel"_s, nullptr)));
	if (newSelectionModel == nullptr) {
		$throwNew($InvalidObjectException, "Null selectionModel"_s);
	}
	$set(this, selectionModel, newSelectionModel);
	$set(this, tableHeader, $cast($JTableHeader, f->get("tableHeader"_s, nullptr)));
	int32_t newRowHeight = f->get("rowHeight"_s, 0);
	if (newRowHeight <= 0) {
		$throwNew($InvalidObjectException, "Row height less than 1"_s);
	}
	this->rowHeight = newRowHeight;
	this->rowMargin = f->get("rowMargin"_s, 0);
	$var($Color, newGridColor, $cast($Color, f->get("gridColor"_s, nullptr)));
	if (newGridColor == nullptr) {
		$throwNew($InvalidObjectException, "Null gridColor"_s);
	}
	$set(this, gridColor, newGridColor);
	this->showHorizontalLines = f->get("showHorizontalLines"_s, false);
	this->showVerticalLines = f->get("showVerticalLines"_s, false);
	int32_t newAutoResizeMode = f->get("autoResizeMode"_s, 0);
	if (!isValidAutoResizeMode(newAutoResizeMode)) {
		$throwNew($InvalidObjectException, "autoResizeMode is not valid"_s);
	}
	this->autoResizeMode = newAutoResizeMode;
	this->autoCreateColumnsFromModel = f->get("autoCreateColumnsFromModel"_s, false);
	$set(this, preferredViewportSize, $cast($Dimension, f->get("preferredViewportSize"_s, nullptr)));
	this->rowSelectionAllowed = f->get("rowSelectionAllowed"_s, false);
	this->cellSelectionEnabled = f->get("cellSelectionEnabled"_s, false);
	$set(this, selectionForeground, $cast($Color, f->get("selectionForeground"_s, nullptr)));
	$set(this, selectionBackground, $cast($Color, f->get("selectionBackground"_s, nullptr)));
	$set(this, rowModel, $cast($SizeSequence, f->get("rowModel"_s, nullptr)));
	bool newDragEnabled = f->get("dragEnabled"_s, false);
	checkDragEnabled(newDragEnabled);
	this->dragEnabled = newDragEnabled;
	this->surrendersFocusOnKeystroke = f->get("surrendersFocusOnKeystroke"_s, false);
	$set(this, editorRemover, $cast($PropertyChangeListener, f->get("editorRemover"_s, nullptr)));
	this->columnSelectionAdjusting = f->get("columnSelectionAdjusting"_s, false);
	this->rowSelectionAdjusting = f->get("rowSelectionAdjusting"_s, false);
	$set(this, printError, $cast($Throwable, f->get("printError"_s, nullptr)));
	this->isRowHeightSet = f->get("isRowHeightSet"_s, false);
	this->updateSelectionOnSort = f->get("updateSelectionOnSort"_s, false);
	this->ignoreSortChange = f->get("ignoreSortChange"_s, false);
	this->sorterChanged$ = f->get("sorterChanged"_s, false);
	this->autoCreateRowSorter = f->get("autoCreateRowSorter"_s, false);
	this->fillsViewportHeight = f->get("fillsViewportHeight"_s, false);
	$init($DropMode);
	$DropMode* newDropMode = $cast($DropMode, f->get("dropMode"_s, $DropMode::USE_SELECTION));
	checkDropMode(newDropMode);
	$set(this, dropMode, newDropMode);
	if ((this->ui != nullptr) && ($$nc(getUIClassID())->equals(JTable::uiClassID))) {
		this->ui->installUI(this);
	}
	createDefaultRenderers();
	createDefaultEditors();
	if (getToolTipText() == nullptr) {
		$$nc($ToolTipManager::sharedInstance())->registerComponent(this);
	}
}

void JTable::compWriteObjectNotify() {
	$JComponent::compWriteObjectNotify();
	if (getToolTipText() == nullptr) {
		$$nc($ToolTipManager::sharedInstance())->unregisterComponent(this);
	}
}

$String* JTable::paramString() {
	$useLocalObjectStack();
	$var($String, gridColorString, this->gridColor != nullptr ? this->gridColor->toString() : ""_s);
	$var($String, showHorizontalLinesString, this->showHorizontalLines ? "true"_s : "false"_s);
	$var($String, showVerticalLinesString, this->showVerticalLines ? "true"_s : "false"_s);
	$var($String, autoResizeModeString, nullptr);
	if (this->autoResizeMode == JTable::AUTO_RESIZE_OFF) {
		$assign(autoResizeModeString, "AUTO_RESIZE_OFF"_s);
	} else if (this->autoResizeMode == JTable::AUTO_RESIZE_NEXT_COLUMN) {
		$assign(autoResizeModeString, "AUTO_RESIZE_NEXT_COLUMN"_s);
	} else if (this->autoResizeMode == JTable::AUTO_RESIZE_SUBSEQUENT_COLUMNS) {
		$assign(autoResizeModeString, "AUTO_RESIZE_SUBSEQUENT_COLUMNS"_s);
	} else if (this->autoResizeMode == JTable::AUTO_RESIZE_LAST_COLUMN) {
		$assign(autoResizeModeString, "AUTO_RESIZE_LAST_COLUMN"_s);
	} else if (this->autoResizeMode == JTable::AUTO_RESIZE_ALL_COLUMNS) {
		$assign(autoResizeModeString, "AUTO_RESIZE_ALL_COLUMNS"_s);
	} else {
		$assign(autoResizeModeString, ""_s);
	}
	$var($String, autoCreateColumnsFromModelString, this->autoCreateColumnsFromModel ? "true"_s : "false"_s);
	$var($String, preferredViewportSizeString, this->preferredViewportSize != nullptr ? this->preferredViewportSize->toString() : ""_s);
	$var($String, rowSelectionAllowedString, this->rowSelectionAllowed ? "true"_s : "false"_s);
	$var($String, cellSelectionEnabledString, this->cellSelectionEnabled ? "true"_s : "false"_s);
	$var($String, selectionForegroundString, this->selectionForeground != nullptr ? this->selectionForeground->toString() : ""_s);
	$var($String, selectionBackgroundString, this->selectionBackground != nullptr ? this->selectionBackground->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",autoCreateColumnsFromModel="_s, autoCreateColumnsFromModelString, ",autoResizeMode="_s, autoResizeModeString, ",cellSelectionEnabled="_s, cellSelectionEnabledString, ",editingColumn="_s, $$str(this->editingColumn), ",editingRow="_s, $$str(this->editingRow), ",gridColor="_s, gridColorString, ",preferredViewportSize="_s, preferredViewportSizeString, ",rowHeight="_s, 
	$$str(this->rowHeight), ",rowMargin="_s, $$str(this->rowMargin), ",rowSelectionAllowed="_s, rowSelectionAllowedString, ",selectionBackground="_s, selectionBackgroundString, ",selectionForeground="_s, selectionForegroundString, ",showHorizontalLines="_s, showHorizontalLinesString, ",showVerticalLines="_s, showVerticalLinesString});
}

bool JTable::print() {
	$init($JTable$PrintMode);
	return print($JTable$PrintMode::FIT_WIDTH);
}

bool JTable::print($JTable$PrintMode* printMode) {
	return print(printMode, nullptr, nullptr);
}

bool JTable::print($JTable$PrintMode* printMode, $MessageFormat* headerFormat, $MessageFormat* footerFormat) {
	bool showDialogs = !$GraphicsEnvironment::isHeadless();
	return print(printMode, headerFormat, footerFormat, showDialogs, nullptr, showDialogs);
}

bool JTable::print($JTable$PrintMode* printMode, $MessageFormat* headerFormat, $MessageFormat* footerFormat, bool showPrintDialog, $PrintRequestAttributeSet* attr, bool interactive) {
	return print(printMode, headerFormat, footerFormat, showPrintDialog, attr, interactive, nullptr);
}

bool JTable::print($JTable$PrintMode* printMode, $MessageFormat* headerFormat, $MessageFormat* footerFormat, bool showPrintDialog, $PrintRequestAttributeSet* attr$renamed, bool interactive, $PrintService* service) {
	$useLocalObjectStack();
	$var($PrintRequestAttributeSet, attr, attr$renamed);
	bool isHeadless = $GraphicsEnvironment::isHeadless();
	if (isHeadless) {
		if (showPrintDialog) {
			$throwNew($HeadlessException, "Can\'t show print dialog."_s);
		}
		if (interactive) {
			$throwNew($HeadlessException, "Can\'t run interactively."_s);
		}
	}
	$var($PrinterJob, job, $PrinterJob::getPrinterJob());
	if (isEditing()) {
		if (!$$nc(getCellEditor())->stopCellEditing()) {
			$$nc(getCellEditor())->cancelCellEditing();
		}
	}
	if (attr == nullptr) {
		$assign(attr, $new($HashPrintRequestAttributeSet));
	}
	$var($PrintingStatus, printingStatus, nullptr);
	$var($Printable, printable, getPrintable(printMode, headerFormat, footerFormat));
	if (interactive) {
		$assign(printable, $new($JTable$ThreadSafePrintable, this, printable));
		$assign(printingStatus, $PrintingStatus::createPrintingStatus(this, job));
		$assign(printable, $nc(printingStatus)->createNotificationPrintable(printable));
	} else {
		$assign(printingStatus, nullptr);
	}
	$nc(job)->setPrintable(printable);
	if (service != nullptr) {
		job->setPrintService(service);
	}
	if (showPrintDialog && !job->printDialog(attr)) {
		return false;
	}
	if (!interactive) {
		job->print(attr);
		return true;
	}
	$set(this, printError, nullptr);
	$var($Object, lock, $new($Object));
	$var($PrintRequestAttributeSet, copyAttr, attr);
	$var($Runnable, runnable, $new(JTable$$Lambda$lambda$print$11$9, this, job, copyAttr, lock, printingStatus));
	$var($Thread, th, $new($Thread, nullptr, runnable, "JTablePrint"_s, 0, false));
	th->start();
	$nc(printingStatus)->showModal(true);
	$var($Throwable, pe, nullptr);
	$synchronized(lock) {
		$assign(pe, this->printError);
		$set(this, printError, nullptr);
	}
	if (pe != nullptr) {
		if ($instanceOf($PrinterAbortException, pe)) {
			return false;
		} else if ($instanceOf($PrinterException, pe)) {
			$throw($cast($PrinterException, pe));
		} else if ($instanceOf($RuntimeException, pe)) {
			$throw($cast($RuntimeException, pe));
		} else if ($instanceOf($Error, pe)) {
			$throw($cast($Error, pe));
		}
		$throwNew($AssertionError, pe);
	}
	return true;
}

$Printable* JTable::getPrintable($JTable$PrintMode* printMode, $MessageFormat* headerFormat, $MessageFormat* footerFormat) {
	return $new($TablePrintable, this, printMode, headerFormat, footerFormat);
}

$AccessibleContext* JTable::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTable$AccessibleJTable, this));
	}
	return this->accessibleContext;
}

void JTable::lambda$print$11($PrinterJob* job, $PrintRequestAttributeSet* copyAttr, Object$* lock, $PrintingStatus* printingStatus) {
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(job)->print(copyAttr);
		} catch ($Throwable& t) {
			$synchronized(lock) {
				$set(this, printError, t);
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(printingStatus)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$Object* JTable::lambda$createDefaultEditors$10($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$BooleanEditor));
}

$Object* JTable::lambda$createDefaultEditors$9($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$NumberEditor));
}

$Object* JTable::lambda$createDefaultEditors$8($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$GenericEditor));
}

$Object* JTable::lambda$createDefaultRenderers$7($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$BooleanRenderer));
}

$Object* JTable::lambda$createDefaultRenderers$5($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$IconRenderer));
}

$Object* JTable::lambda$createDefaultRenderers$4($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$DateRenderer));
}

$Object* JTable::lambda$createDefaultRenderers$2($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$DoubleRenderer));
}

$Object* JTable::lambda$createDefaultRenderers$1($UIDefaults* t) {
	$init(JTable);
	return $of($new($JTable$NumberRenderer));
}

$Object* JTable::lambda$createDefaultRenderers$0($UIDefaults* t) {
	$init(JTable);
	return $of($new($DefaultTableCellRenderer$UIResource));
}

void JTable::clinit$($Class* clazz) {
	$assignStatic(JTable::uiClassID, "TableUI"_s);
	JTable::$assertionsDisabled = !JTable::class$->desiredAssertionStatus();
}

JTable::JTable() {
}

$Class* JTable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$0")) {
			return JTable$$Lambda$lambda$createDefaultRenderers$0::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$1$1")) {
			return JTable$$Lambda$lambda$createDefaultRenderers$1$1::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$2$2")) {
			return JTable$$Lambda$lambda$createDefaultRenderers$2$2::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$4$3")) {
			return JTable$$Lambda$lambda$createDefaultRenderers$4$3::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$5$4")) {
			return JTable$$Lambda$lambda$createDefaultRenderers$5$4::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultRenderers$7$5")) {
			return JTable$$Lambda$lambda$createDefaultRenderers$7$5::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultEditors$8$6")) {
			return JTable$$Lambda$lambda$createDefaultEditors$8$6::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultEditors$9$7")) {
			return JTable$$Lambda$lambda$createDefaultEditors$9$7::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$createDefaultEditors$10$8")) {
			return JTable$$Lambda$lambda$createDefaultEditors$10$8::load$(name, initialize);
		}
		if (name->equals("javax.swing.JTable$$Lambda$lambda$print$11$9")) {
			return JTable$$Lambda$lambda$print$11$9::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JTable, $assertionsDisabled)},
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTable, uiClassID)},
		{"AUTO_RESIZE_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JTable, AUTO_RESIZE_OFF)},
		{"AUTO_RESIZE_NEXT_COLUMN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JTable, AUTO_RESIZE_NEXT_COLUMN)},
		{"AUTO_RESIZE_SUBSEQUENT_COLUMNS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JTable, AUTO_RESIZE_SUBSEQUENT_COLUMNS)},
		{"AUTO_RESIZE_LAST_COLUMN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JTable, AUTO_RESIZE_LAST_COLUMN)},
		{"AUTO_RESIZE_ALL_COLUMNS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JTable, AUTO_RESIZE_ALL_COLUMNS)},
		{"dataModel", "Ljavax/swing/table/TableModel;", nullptr, $PROTECTED, $field(JTable, dataModel)},
		{"columnModel", "Ljavax/swing/table/TableColumnModel;", nullptr, $PROTECTED, $field(JTable, columnModel)},
		{"selectionModel", "Ljavax/swing/ListSelectionModel;", nullptr, $PROTECTED, $field(JTable, selectionModel)},
		{"tableHeader", "Ljavax/swing/table/JTableHeader;", nullptr, $PROTECTED, $field(JTable, tableHeader)},
		{"rowHeight", "I", nullptr, $PROTECTED, $field(JTable, rowHeight)},
		{"rowMargin", "I", nullptr, $PROTECTED, $field(JTable, rowMargin)},
		{"gridColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(JTable, gridColor)},
		{"showHorizontalLines", "Z", nullptr, $PROTECTED, $field(JTable, showHorizontalLines)},
		{"showVerticalLines", "Z", nullptr, $PROTECTED, $field(JTable, showVerticalLines)},
		{"autoResizeMode", "I", nullptr, $PROTECTED, $field(JTable, autoResizeMode)},
		{"autoCreateColumnsFromModel", "Z", nullptr, $PROTECTED, $field(JTable, autoCreateColumnsFromModel)},
		{"preferredViewportSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(JTable, preferredViewportSize)},
		{"rowSelectionAllowed", "Z", nullptr, $PROTECTED, $field(JTable, rowSelectionAllowed)},
		{"cellSelectionEnabled", "Z", nullptr, $PROTECTED, $field(JTable, cellSelectionEnabled)},
		{"editorComp", "Ljava/awt/Component;", nullptr, $PROTECTED | $TRANSIENT, $field(JTable, editorComp)},
		{"cellEditor", "Ljavax/swing/table/TableCellEditor;", nullptr, $PROTECTED | $TRANSIENT, $field(JTable, cellEditor)},
		{"editingColumn", "I", nullptr, $PROTECTED | $TRANSIENT, $field(JTable, editingColumn)},
		{"editingRow", "I", nullptr, $PROTECTED | $TRANSIENT, $field(JTable, editingRow)},
		{"defaultRenderersByColumnClass", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PROTECTED | $TRANSIENT, $field(JTable, defaultRenderersByColumnClass)},
		{"defaultEditorsByColumnClass", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PROTECTED | $TRANSIENT, $field(JTable, defaultEditorsByColumnClass)},
		{"selectionForeground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(JTable, selectionForeground)},
		{"selectionBackground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(JTable, selectionBackground)},
		{"rowModel", "Ljavax/swing/SizeSequence;", nullptr, $PRIVATE, $field(JTable, rowModel)},
		{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JTable, dragEnabled)},
		{"surrendersFocusOnKeystroke", "Z", nullptr, $PRIVATE, $field(JTable, surrendersFocusOnKeystroke)},
		{"editorRemover", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(JTable, editorRemover)},
		{"columnSelectionAdjusting", "Z", nullptr, $PRIVATE, $field(JTable, columnSelectionAdjusting)},
		{"rowSelectionAdjusting", "Z", nullptr, $PRIVATE, $field(JTable, rowSelectionAdjusting)},
		{"printError", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(JTable, printError)},
		{"isRowHeightSet", "Z", nullptr, $PRIVATE, $field(JTable, isRowHeightSet)},
		{"updateSelectionOnSort", "Z", nullptr, $PRIVATE, $field(JTable, updateSelectionOnSort)},
		{"sortManager", "Ljavax/swing/JTable$SortManager;", nullptr, $PRIVATE | $TRANSIENT, $field(JTable, sortManager)},
		{"ignoreSortChange", "Z", nullptr, $PRIVATE, $field(JTable, ignoreSortChange)},
		{"sorterChanged", "Z", nullptr, $PRIVATE, $field(JTable, sorterChanged$)},
		{"autoCreateRowSorter", "Z", nullptr, $PRIVATE, $field(JTable, autoCreateRowSorter)},
		{"fillsViewportHeight", "Z", nullptr, $PRIVATE, $field(JTable, fillsViewportHeight)},
		{"dropMode", "Ljavax/swing/DropMode;", nullptr, $PRIVATE, $field(JTable, dropMode)},
		{"dropLocation", "Ljavax/swing/JTable$DropLocation;", nullptr, $PRIVATE | $TRANSIENT, $field(JTable, dropLocation)},
		{"updateInProgress", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JTable, updateInProgress)},
		{}
	};
	$CompoundAttribute createScrollPaneForTablemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getColumnCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getColumnCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getColumnCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getDropLocationmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getDropLocationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getDropLocationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getEditorComponentmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getEditorComponentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getEditorComponentmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getRowCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getRowCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getRowCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getScrollableTracksViewportHeightmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getScrollableTracksViewportHeightmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getScrollableTracksViewportHeightmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getScrollableTracksViewportWidthmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getScrollableTracksViewportWidthmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getScrollableTracksViewportWidthmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSelectedColumnmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedColumnmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedColumnmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSelectedColumnCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedColumnCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedColumnCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSelectedColumnsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedColumnsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedColumnsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSelectedRowmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedRowmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedRowmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSelectedRowCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedRowCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedRowCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSelectedRowsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedRowsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedRowsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isEditingmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isEditingmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isEditingmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setAutoCreateColumnsFromModelmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Automatically populates the columnModel when a new TableModel is submitted."},
		{}
	};
	$CompoundAttribute setAutoCreateColumnsFromModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAutoCreateColumnsFromModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setAutoCreateRowSortermethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Whether or not to turn on sorting by default."},
		{}
	};
	$CompoundAttribute setAutoCreateRowSortermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAutoCreateRowSortermethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "JTable.AUTO_RESIZE_OFF"},
		{'s', "JTable.AUTO_RESIZE_NEXT_COLUMN"},
		{'s', "JTable.AUTO_RESIZE_SUBSEQUENT_COLUMNS"},
		{'s', "JTable.AUTO_RESIZE_LAST_COLUMN"},
		{'s', "JTable.AUTO_RESIZE_ALL_COLUMNS"},
		{'-'}
	};
	$NamedAttribute setAutoResizeModemethodAnnotations$$$namedAttribute[] = {
		{"enumerationValues", '[', $attribute},
		{"description", 's', "Whether the columns should adjust themselves automatically."},
		{}
	};
	$CompoundAttribute setAutoResizeModemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAutoResizeModemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setCellEditormethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The table\'s active cell editor."},
		{}
	};
	$CompoundAttribute setCellEditormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCellEditormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setCellSelectionEnabledmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Select a rectangular region of cells rather than rows or columns."},
		{}
	};
	$CompoundAttribute setCellSelectionEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCellSelectionEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setColumnModelmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The object governing the way columns appear in the view."},
		{}
	};
	$CompoundAttribute setColumnModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setColumnModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setColumnSelectionAllowedmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "If true, an entire column is selected for each selected cell."},
		{}
	};
	$CompoundAttribute setColumnSelectionAllowedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setColumnSelectionAllowedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDragEnabledmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "determines whether automatic drag handling is enabled"},
		{}
	};
	$CompoundAttribute setDragEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDragEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFillsViewportHeightmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Whether or not this table is always made large enough to fill the height of an enclosing viewport"},
		{}
	};
	$CompoundAttribute setFillsViewportHeightmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFillsViewportHeightmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setGridColormethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The grid color."},
		{}
	};
	$CompoundAttribute setGridColormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setGridColormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setIntercellSpacingmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "The spacing between the cells, drawn in the background color of the JTable."},
		{}
	};
	$CompoundAttribute setIntercellSpacingmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setIntercellSpacingmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setModelmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The model that is the source of the data for this view."},
		{}
	};
	$CompoundAttribute setModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPreferredScrollableViewportSizemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "The preferred size of the viewport."},
		{}
	};
	$CompoundAttribute setPreferredScrollableViewportSizemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPreferredScrollableViewportSizemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRowHeightmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The height of the specified row."},
		{}
	};
	$CompoundAttribute setRowHeightmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRowHeightmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRowHeightmethodAnnotations$$$1$namedAttribute[] = {
		{"description", 's', "The height in pixels of the cells in <code>row</code>"},
		{}
	};
	$CompoundAttribute setRowHeightmethodAnnotations$$$1[] = {
		{"Ljava/beans/BeanProperty;", setRowHeightmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute setRowMarginmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The amount of space between cells."},
		{}
	};
	$CompoundAttribute setRowMarginmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRowMarginmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRowSelectionAllowedmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "If true, an entire row is selected for each selected cell."},
		{}
	};
	$CompoundAttribute setRowSelectionAllowedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRowSelectionAllowedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRowSortermethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The table\'s RowSorter"},
		{}
	};
	$CompoundAttribute setRowSortermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRowSortermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionBackgroundmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "A default background color for selected cells."},
		{}
	};
	$CompoundAttribute setSelectionBackgroundmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionBackgroundmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionForegroundmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "A default foreground color for selected cells."},
		{}
	};
	$CompoundAttribute setSelectionForegroundmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionForegroundmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$1[] = {
		{'s', "ListSelectionModel.SINGLE_SELECTION"},
		{'s', "ListSelectionModel.SINGLE_INTERVAL_SELECTION"},
		{'s', "ListSelectionModel.MULTIPLE_INTERVAL_SELECTION"},
		{'-'}
	};
	$NamedAttribute setSelectionModemethodAnnotations$$$namedAttribute[] = {
		{"enumerationValues", '[', $attribute$1},
		{"description", 's', "The selection mode used by the row and column selection models."},
		{}
	};
	$CompoundAttribute setSelectionModemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionModemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionModelmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The selection model for rows."},
		{}
	};
	$CompoundAttribute setSelectionModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setShowGridmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The color used to draw the grid lines."},
		{}
	};
	$CompoundAttribute setShowGridmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setShowGridmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setShowHorizontalLinesmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Whether horizontal lines should be drawn in between the cells."},
		{}
	};
	$CompoundAttribute setShowHorizontalLinesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setShowHorizontalLinesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setShowVerticalLinesmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Whether vertical lines should be drawn in between the cells."},
		{}
	};
	$CompoundAttribute setShowVerticalLinesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setShowVerticalLinesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTableHeadermethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The JTableHeader instance which renders the column headers."},
		{}
	};
	$CompoundAttribute setTableHeadermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTableHeadermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUpdateSelectionOnSortmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "Whether or not to update the selection on sorting"},
		{}
	};
	$CompoundAttribute setUpdateSelectionOnSortmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUpdateSelectionOnSortmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute sizeColumnsToFitmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable, init$, void)},
		{"<init>", "(Ljavax/swing/table/TableModel;)V", nullptr, $PUBLIC, $method(JTable, init$, void, $TableModel*)},
		{"<init>", "(Ljavax/swing/table/TableModel;Ljavax/swing/table/TableColumnModel;)V", nullptr, $PUBLIC, $method(JTable, init$, void, $TableModel*, $TableColumnModel*)},
		{"<init>", "(Ljavax/swing/table/TableModel;Ljavax/swing/table/TableColumnModel;Ljavax/swing/ListSelectionModel;)V", nullptr, $PUBLIC, $method(JTable, init$, void, $TableModel*, $TableColumnModel*, $ListSelectionModel*)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(JTable, init$, void, int32_t, int32_t)},
		{"<init>", "(Ljava/util/Vector;Ljava/util/Vector;)V", "(Ljava/util/Vector<+Ljava/util/Vector;>;Ljava/util/Vector<*>;)V", $PUBLIC, $method(JTable, init$, void, $Vector*, $Vector*)},
		{"<init>", "([[Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(JTable, init$, void, $ObjectArray2*, $ObjectArray*)},
		{"accommodateDelta", "(II)V", nullptr, $PRIVATE, $method(JTable, accommodateDelta, void, int32_t, int32_t)},
		{"addColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC, $virtualMethod(JTable, addColumn, void, $TableColumn*)},
		{"addColumnSelectionInterval", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, addColumnSelectionInterval, void, int32_t, int32_t)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, addNotify, void)},
		{"addRowSelectionInterval", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, addRowSelectionInterval, void, int32_t, int32_t)},
		{"adjustSizes", "(JLjavax/swing/JTable$Resizable3;Z)V", nullptr, $PRIVATE, $method(JTable, adjustSizes, void, int64_t, $JTable$Resizable3*, bool)},
		{"adjustSizes", "(JLjavax/swing/JTable$Resizable2;Z)V", nullptr, $PRIVATE, $method(JTable, adjustSizes, void, int64_t, $JTable$Resizable2*, bool)},
		{"boundColumn", "(I)I", nullptr, $PRIVATE, $method(JTable, boundColumn, int32_t, int32_t)},
		{"boundRow", "(I)I", nullptr, $PRIVATE, $method(JTable, boundRow, int32_t, int32_t), "java.lang.IllegalArgumentException"},
		{"changeSelection", "(IIZZ)V", nullptr, $PUBLIC, $virtualMethod(JTable, changeSelection, void, int32_t, int32_t, bool, bool)},
		{"changeSelectionModel", "(Ljavax/swing/ListSelectionModel;IZZZIZ)V", nullptr, $PRIVATE, $method(JTable, changeSelectionModel, void, $ListSelectionModel*, int32_t, bool, bool, bool, int32_t, bool)},
		{"checkDragEnabled", "(Z)V", nullptr, $PRIVATE, $method(JTable, checkDragEnabled, void, bool)},
		{"checkDropMode", "(Ljavax/swing/DropMode;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTable, checkDropMode, void, $DropMode*)},
		{"clearSelection", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, clearSelection, void)},
		{"clearSelectionAndLeadAnchor", "()V", nullptr, $PRIVATE, $method(JTable, clearSelectionAndLeadAnchor, void)},
		{"columnAdded", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, columnAdded, void, $TableColumnModelEvent*)},
		{"columnAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC, $virtualMethod(JTable, columnAtPoint, int32_t, $Point*)},
		{"columnMarginChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, columnMarginChanged, void, $ChangeEvent*)},
		{"columnMoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, columnMoved, void, $TableColumnModelEvent*)},
		{"columnRemoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, columnRemoved, void, $TableColumnModelEvent*)},
		{"columnSelectionChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, columnSelectionChanged, void, $ListSelectionEvent*)},
		{"compWriteObjectNotify", "()V", nullptr, 0, $virtualMethod(JTable, compWriteObjectNotify, void)},
		{"configureEnclosingScrollPane", "()V", nullptr, $PROTECTED, $virtualMethod(JTable, configureEnclosingScrollPane, void)},
		{"configureEnclosingScrollPaneUI", "()V", nullptr, $PRIVATE, $method(JTable, configureEnclosingScrollPaneUI, void)},
		{"convertColumnIndexToModel", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTable, convertColumnIndexToModel, int32_t, int32_t)},
		{"convertColumnIndexToView", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTable, convertColumnIndexToView, int32_t, int32_t)},
		{"convertRowIndexToModel", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTable, convertRowIndexToModel, int32_t, int32_t)},
		{"convertRowIndexToModel", "(Ljavax/swing/event/RowSorterEvent;I)I", nullptr, $PRIVATE, $method(JTable, convertRowIndexToModel, int32_t, $RowSorterEvent*, int32_t)},
		{"convertRowIndexToView", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTable, convertRowIndexToView, int32_t, int32_t)},
		{"convertRowIndexToView", "(ILjavax/swing/JTable$ModelChange;)I", nullptr, $PRIVATE, $method(JTable, convertRowIndexToView, int32_t, int32_t, $JTable$ModelChange*)},
		{"convertSelectionToModel", "(Ljavax/swing/event/RowSorterEvent;)[I", nullptr, $PRIVATE, $method(JTable, convertSelectionToModel, $ints*, $RowSorterEvent*)},
		{"createDefaultColumnModel", "()Ljavax/swing/table/TableColumnModel;", nullptr, $PROTECTED, $virtualMethod(JTable, createDefaultColumnModel, $TableColumnModel*)},
		{"createDefaultColumnsFromModel", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, createDefaultColumnsFromModel, void)},
		{"createDefaultDataModel", "()Ljavax/swing/table/TableModel;", nullptr, $PROTECTED, $virtualMethod(JTable, createDefaultDataModel, $TableModel*)},
		{"createDefaultEditors", "()V", nullptr, $PROTECTED, $virtualMethod(JTable, createDefaultEditors, void)},
		{"createDefaultRenderers", "()V", nullptr, $PROTECTED, $virtualMethod(JTable, createDefaultRenderers, void)},
		{"createDefaultSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PROTECTED, $virtualMethod(JTable, createDefaultSelectionModel, $ListSelectionModel*)},
		{"createDefaultTableHeader", "()Ljavax/swing/table/JTableHeader;", nullptr, $PROTECTED, $virtualMethod(JTable, createDefaultTableHeader, $JTableHeader*)},
		{"createScrollPaneForTable", "(Ljavax/swing/JTable;)Ljavax/swing/JScrollPane;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(JTable, createScrollPaneForTable, $JScrollPane*, JTable*), nullptr, nullptr, createScrollPaneForTablemethodAnnotations$$},
		{"doLayout", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, doLayout, void)},
		{"dropLocationForPoint", "(Ljava/awt/Point;)Ljavax/swing/JTable$DropLocation;", nullptr, 0, $virtualMethod(JTable, dropLocationForPoint, $TransferHandler$DropLocation*, $Point*)},
		{"editCellAt", "(II)Z", nullptr, $PUBLIC, $virtualMethod(JTable, editCellAt, bool, int32_t, int32_t)},
		{"editCellAt", "(IILjava/util/EventObject;)Z", nullptr, $PUBLIC, $virtualMethod(JTable, editCellAt, bool, int32_t, int32_t, $EventObject*)},
		{"editingCanceled", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, editingCanceled, void, $ChangeEvent*)},
		{"editingStopped", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, editingStopped, void, $ChangeEvent*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JTable, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getAdjustedIndex", "(IZ)I", nullptr, $PRIVATE, $method(JTable, getAdjustedIndex, int32_t, int32_t, bool)},
		{"getAutoCreateColumnsFromModel", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getAutoCreateColumnsFromModel, bool)},
		{"getAutoCreateRowSorter", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getAutoCreateRowSorter, bool)},
		{"getAutoResizeMode", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getAutoResizeMode, int32_t)},
		{"getCellEditor", "()Ljavax/swing/table/TableCellEditor;", nullptr, $PUBLIC, $virtualMethod(JTable, getCellEditor, $TableCellEditor*)},
		{"getCellEditor", "(II)Ljavax/swing/table/TableCellEditor;", nullptr, $PUBLIC, $virtualMethod(JTable, getCellEditor, $TableCellEditor*, int32_t, int32_t)},
		{"getCellRect", "(IIZ)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(JTable, getCellRect, $Rectangle*, int32_t, int32_t, bool)},
		{"getCellRenderer", "(II)Ljavax/swing/table/TableCellRenderer;", nullptr, $PUBLIC, $virtualMethod(JTable, getCellRenderer, $TableCellRenderer*, int32_t, int32_t)},
		{"getCellSelectionEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getCellSelectionEnabled, bool)},
		{"getColumn", "(Ljava/lang/Object;)Ljavax/swing/table/TableColumn;", nullptr, $PUBLIC, $virtualMethod(JTable, getColumn, $TableColumn*, Object$*)},
		{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(JTable, getColumnClass, $Class*, int32_t)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getColumnCount, int32_t), nullptr, nullptr, getColumnCountmethodAnnotations$$},
		{"getColumnModel", "()Ljavax/swing/table/TableColumnModel;", nullptr, $PUBLIC, $virtualMethod(JTable, getColumnModel, $TableColumnModel*)},
		{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTable, getColumnName, $String*, int32_t)},
		{"getColumnSelectionAllowed", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getColumnSelectionAllowed, bool)},
		{"getDefaultEditor", "(Ljava/lang/Class;)Ljavax/swing/table/TableCellEditor;", "(Ljava/lang/Class<*>;)Ljavax/swing/table/TableCellEditor;", $PUBLIC, $virtualMethod(JTable, getDefaultEditor, $TableCellEditor*, $Class*)},
		{"getDefaultRenderer", "(Ljava/lang/Class;)Ljavax/swing/table/TableCellRenderer;", "(Ljava/lang/Class<*>;)Ljavax/swing/table/TableCellRenderer;", $PUBLIC, $virtualMethod(JTable, getDefaultRenderer, $TableCellRenderer*, $Class*)},
		{"getDragEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getDragEnabled, bool)},
		{"getDropLocation", "()Ljavax/swing/JTable$DropLocation;", nullptr, $PUBLIC | $FINAL, $method(JTable, getDropLocation, $JTable$DropLocation*), nullptr, nullptr, getDropLocationmethodAnnotations$$},
		{"getDropMode", "()Ljavax/swing/DropMode;", nullptr, $PUBLIC | $FINAL, $method(JTable, getDropMode, $DropMode*)},
		{"getEditingColumn", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getEditingColumn, int32_t)},
		{"getEditingRow", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getEditingRow, int32_t)},
		{"getEditorComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JTable, getEditorComponent, $Component*), nullptr, nullptr, getEditorComponentmethodAnnotations$$},
		{"getFillsViewportHeight", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getFillsViewportHeight, bool)},
		{"getGridColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JTable, getGridColor, $Color*)},
		{"getIntercellSpacing", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JTable, getIntercellSpacing, $Dimension*)},
		{"getLeadingCol", "(Ljava/awt/Rectangle;)I", nullptr, $PRIVATE, $method(JTable, getLeadingCol, int32_t, $Rectangle*)},
		{"getLeadingRow", "(Ljava/awt/Rectangle;)I", nullptr, $PRIVATE, $method(JTable, getLeadingRow, int32_t, $Rectangle*)},
		{"getModel", "()Ljavax/swing/table/TableModel;", nullptr, $PUBLIC, $virtualMethod(JTable, getModel, $TableModel*)},
		{"getNextBlockIncrement", "(Ljava/awt/Rectangle;I)I", nullptr, $PRIVATE, $method(JTable, getNextBlockIncrement, int32_t, $Rectangle*, int32_t)},
		{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JTable, getPreferredScrollableViewportSize, $Dimension*)},
		{"getPreviousBlockIncrement", "(Ljava/awt/Rectangle;I)I", nullptr, $PRIVATE, $method(JTable, getPreviousBlockIncrement, int32_t, $Rectangle*, int32_t)},
		{"getPrintable", "(Ljavax/swing/JTable$PrintMode;Ljava/text/MessageFormat;Ljava/text/MessageFormat;)Ljava/awt/print/Printable;", nullptr, $PUBLIC, $virtualMethod(JTable, getPrintable, $Printable*, $JTable$PrintMode*, $MessageFormat*, $MessageFormat*)},
		{"getResizingColumn", "()Ljavax/swing/table/TableColumn;", nullptr, $PRIVATE, $method(JTable, getResizingColumn, $TableColumn*)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getRowCount, int32_t), nullptr, nullptr, getRowCountmethodAnnotations$$},
		{"getRowHeight", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getRowHeight, int32_t)},
		{"getRowHeight", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTable, getRowHeight, int32_t, int32_t)},
		{"getRowMargin", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getRowMargin, int32_t)},
		{"getRowModel", "()Ljavax/swing/SizeSequence;", nullptr, $PRIVATE, $method(JTable, getRowModel, $SizeSequence*)},
		{"getRowSelectionAllowed", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getRowSelectionAllowed, bool)},
		{"getRowSorter", "()Ljavax/swing/RowSorter;", "()Ljavax/swing/RowSorter<+Ljavax/swing/table/TableModel;>;", $PUBLIC, $virtualMethod(JTable, getRowSorter, $RowSorter*)},
		{"getScrollableBlockIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC, $virtualMethod(JTable, getScrollableBlockIncrement, int32_t, $Rectangle*, int32_t, int32_t)},
		{"getScrollableTracksViewportHeight", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getScrollableTracksViewportHeight, bool), nullptr, nullptr, getScrollableTracksViewportHeightmethodAnnotations$$},
		{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getScrollableTracksViewportWidth, bool), nullptr, nullptr, getScrollableTracksViewportWidthmethodAnnotations$$},
		{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC, $virtualMethod(JTable, getScrollableUnitIncrement, int32_t, $Rectangle*, int32_t, int32_t)},
		{"getSelectedColumn", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectedColumn, int32_t), nullptr, nullptr, getSelectedColumnmethodAnnotations$$},
		{"getSelectedColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectedColumnCount, int32_t), nullptr, nullptr, getSelectedColumnCountmethodAnnotations$$},
		{"getSelectedColumns", "()[I", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectedColumns, $ints*), nullptr, nullptr, getSelectedColumnsmethodAnnotations$$},
		{"getSelectedRow", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectedRow, int32_t), nullptr, nullptr, getSelectedRowmethodAnnotations$$},
		{"getSelectedRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectedRowCount, int32_t), nullptr, nullptr, getSelectedRowCountmethodAnnotations$$},
		{"getSelectedRows", "()[I", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectedRows, $ints*), nullptr, nullptr, getSelectedRowsmethodAnnotations$$},
		{"getSelectionBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectionBackground, $Color*)},
		{"getSelectionForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectionForeground, $Color*)},
		{"getSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PUBLIC, $virtualMethod(JTable, getSelectionModel, $ListSelectionModel*)},
		{"getShowHorizontalLines", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getShowHorizontalLines, bool)},
		{"getShowVerticalLines", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getShowVerticalLines, bool)},
		{"getSurrendersFocusOnKeystroke", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getSurrendersFocusOnKeystroke, bool)},
		{"getTableHeader", "()Ljavax/swing/table/JTableHeader;", nullptr, $PUBLIC, $virtualMethod(JTable, getTableHeader, $JTableHeader*)},
		{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTable, getToolTipText, $String*, $MouseEvent*)},
		{"getTrailingCol", "(Ljava/awt/Rectangle;)I", nullptr, $PRIVATE, $method(JTable, getTrailingCol, int32_t, $Rectangle*)},
		{"getTrailingRow", "(Ljava/awt/Rectangle;)I", nullptr, $PRIVATE, $method(JTable, getTrailingRow, int32_t, $Rectangle*)},
		{"getUI", "()Ljavax/swing/plaf/TableUI;", nullptr, $PUBLIC, $virtualMethod(JTable, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTable, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getUpdateSelectionOnSort", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, getUpdateSelectionOnSort, bool)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable, getValueAt, $Object*, int32_t, int32_t)},
		{"initializeLocalVars", "()V", nullptr, $PROTECTED, $virtualMethod(JTable, initializeLocalVars, void)},
		{"isCellEditable", "(II)Z", nullptr, $PUBLIC, $virtualMethod(JTable, isCellEditable, bool, int32_t, int32_t)},
		{"isCellSelected", "(II)Z", nullptr, $PUBLIC, $virtualMethod(JTable, isCellSelected, bool, int32_t, int32_t)},
		{"isColumnSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JTable, isColumnSelected, bool, int32_t)},
		{"isEditing", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, isEditing, bool), nullptr, nullptr, isEditingmethodAnnotations$$},
		{"isRowSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JTable, isRowSelected, bool, int32_t)},
		{"isValidAutoResizeMode", "(I)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(JTable, isValidAutoResizeMode, bool, int32_t)},
		{"lambda$createDefaultEditors$10", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultEditors$10, $Object*, $UIDefaults*)},
		{"lambda$createDefaultEditors$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultEditors$8, $Object*, $UIDefaults*)},
		{"lambda$createDefaultEditors$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultEditors$9, $Object*, $UIDefaults*)},
		{"lambda$createDefaultRenderers$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultRenderers$0, $Object*, $UIDefaults*)},
		{"lambda$createDefaultRenderers$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultRenderers$1, $Object*, $UIDefaults*)},
		{"lambda$createDefaultRenderers$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultRenderers$2, $Object*, $UIDefaults*)},
		{"lambda$createDefaultRenderers$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultRenderers$4, $Object*, $UIDefaults*)},
		{"lambda$createDefaultRenderers$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultRenderers$5, $Object*, $UIDefaults*)},
		{"lambda$createDefaultRenderers$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable, lambda$createDefaultRenderers$7, $Object*, $UIDefaults*)},
		{"lambda$print$11", "(Ljava/awt/print/PrinterJob;Ljavax/print/attribute/PrintRequestAttributeSet;Ljava/lang/Object;Lsun/swing/PrintingStatus;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(JTable, lambda$print$11, void, $PrinterJob*, $PrintRequestAttributeSet*, Object$*, $PrintingStatus*)},
		{"leadingEdge", "(Ljava/awt/Rectangle;I)I", nullptr, $PRIVATE, $method(JTable, leadingEdge, int32_t, $Rectangle*, int32_t)},
		{"limit", "(III)I", nullptr, $PRIVATE, $method(JTable, limit, int32_t, int32_t, int32_t, int32_t)},
		{"moveColumn", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, moveColumn, void, int32_t, int32_t)},
		{"notifySorter", "(Ljavax/swing/JTable$ModelChange;)V", nullptr, $PRIVATE, $method(JTable, notifySorter, void, $JTable$ModelChange*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JTable, paramString, $String*)},
		{"prepareEditor", "(Ljavax/swing/table/TableCellEditor;II)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JTable, prepareEditor, $Component*, $TableCellEditor*, int32_t, int32_t)},
		{"prepareRenderer", "(Ljavax/swing/table/TableCellRenderer;II)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JTable, prepareRenderer, $Component*, $TableCellRenderer*, int32_t, int32_t)},
		{"print", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable, print, bool), "java.awt.print.PrinterException"},
		{"print", "(Ljavax/swing/JTable$PrintMode;)Z", nullptr, $PUBLIC, $virtualMethod(JTable, print, bool, $JTable$PrintMode*), "java.awt.print.PrinterException"},
		{"print", "(Ljavax/swing/JTable$PrintMode;Ljava/text/MessageFormat;Ljava/text/MessageFormat;)Z", nullptr, $PUBLIC, $virtualMethod(JTable, print, bool, $JTable$PrintMode*, $MessageFormat*, $MessageFormat*), "java.awt.print.PrinterException"},
		{"print", "(Ljavax/swing/JTable$PrintMode;Ljava/text/MessageFormat;Ljava/text/MessageFormat;ZLjavax/print/attribute/PrintRequestAttributeSet;Z)Z", nullptr, $PUBLIC, $virtualMethod(JTable, print, bool, $JTable$PrintMode*, $MessageFormat*, $MessageFormat*, bool, $PrintRequestAttributeSet*, bool), "java.awt.print.PrinterException,java.awt.HeadlessException"},
		{"print", "(Ljavax/swing/JTable$PrintMode;Ljava/text/MessageFormat;Ljava/text/MessageFormat;ZLjavax/print/attribute/PrintRequestAttributeSet;ZLjavax/print/PrintService;)Z", nullptr, $PUBLIC, $virtualMethod(JTable, print, bool, $JTable$PrintMode*, $MessageFormat*, $MessageFormat*, bool, $PrintRequestAttributeSet*, bool, $PrintService*), "java.awt.print.PrinterException,java.awt.HeadlessException"},
		{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED, $virtualMethod(JTable, processKeyBinding, bool, $KeyStroke*, $KeyEvent*, int32_t, bool)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JTable, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"removeColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC, $virtualMethod(JTable, removeColumn, void, $TableColumn*)},
		{"removeColumnSelectionInterval", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, removeColumnSelectionInterval, void, int32_t, int32_t)},
		{"removeEditor", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, removeEditor, void)},
		{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, removeNotify, void)},
		{"removeRowSelectionInterval", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, removeRowSelectionInterval, void, int32_t, int32_t)},
		{"repaintSortedRows", "(Ljavax/swing/JTable$ModelChange;)V", nullptr, $PRIVATE, $method(JTable, repaintSortedRows, void, $JTable$ModelChange*)},
		{"resizeAndRepaint", "()V", nullptr, $PROTECTED, $virtualMethod(JTable, resizeAndRepaint, void)},
		{"restoreSortingEditingRow", "(I)V", nullptr, $PRIVATE, $method(JTable, restoreSortingEditingRow, void, int32_t)},
		{"restoreSortingSelection", "([IILjavax/swing/JTable$ModelChange;)V", nullptr, $PRIVATE, $method(JTable, restoreSortingSelection, void, $ints*, int32_t, $JTable$ModelChange*)},
		{"rowAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC, $virtualMethod(JTable, rowAtPoint, int32_t, $Point*)},
		{"selectAll", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, selectAll, void)},
		{"setAutoCreateColumnsFromModel", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setAutoCreateColumnsFromModel, void, bool), nullptr, nullptr, setAutoCreateColumnsFromModelmethodAnnotations$$},
		{"setAutoCreateRowSorter", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setAutoCreateRowSorter, void, bool), nullptr, nullptr, setAutoCreateRowSortermethodAnnotations$$},
		{"setAutoResizeMode", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTable, setAutoResizeMode, void, int32_t), nullptr, nullptr, setAutoResizeModemethodAnnotations$$},
		{"setCellEditor", "(Ljavax/swing/table/TableCellEditor;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setCellEditor, void, $TableCellEditor*), nullptr, nullptr, setCellEditormethodAnnotations$$},
		{"setCellSelectionEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setCellSelectionEnabled, void, bool), nullptr, nullptr, setCellSelectionEnabledmethodAnnotations$$},
		{"setColumnModel", "(Ljavax/swing/table/TableColumnModel;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setColumnModel, void, $TableColumnModel*), nullptr, nullptr, setColumnModelmethodAnnotations$$},
		{"setColumnSelectionAllowed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setColumnSelectionAllowed, void, bool), nullptr, nullptr, setColumnSelectionAllowedmethodAnnotations$$},
		{"setColumnSelectionInterval", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, setColumnSelectionInterval, void, int32_t, int32_t)},
		{"setDefaultEditor", "(Ljava/lang/Class;Ljavax/swing/table/TableCellEditor;)V", "(Ljava/lang/Class<*>;Ljavax/swing/table/TableCellEditor;)V", $PUBLIC, $virtualMethod(JTable, setDefaultEditor, void, $Class*, $TableCellEditor*)},
		{"setDefaultRenderer", "(Ljava/lang/Class;Ljavax/swing/table/TableCellRenderer;)V", "(Ljava/lang/Class<*>;Ljavax/swing/table/TableCellRenderer;)V", $PUBLIC, $virtualMethod(JTable, setDefaultRenderer, void, $Class*, $TableCellRenderer*)},
		{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setDragEnabled, void, bool), nullptr, nullptr, setDragEnabledmethodAnnotations$$},
		{"setDropLocation", "(Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, 0, $virtualMethod(JTable, setDropLocation, $Object*, $TransferHandler$DropLocation*, Object$*, bool)},
		{"setDropMode", "(Ljavax/swing/DropMode;)V", nullptr, $PUBLIC | $FINAL, $method(JTable, setDropMode, void, $DropMode*)},
		{"setEditingColumn", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTable, setEditingColumn, void, int32_t)},
		{"setEditingRow", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTable, setEditingRow, void, int32_t)},
		{"setFillsViewportHeight", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setFillsViewportHeight, void, bool), nullptr, nullptr, setFillsViewportHeightmethodAnnotations$$},
		{"setGridColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setGridColor, void, $Color*), nullptr, nullptr, setGridColormethodAnnotations$$},
		{"setIntercellSpacing", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setIntercellSpacing, void, $Dimension*), nullptr, nullptr, setIntercellSpacingmethodAnnotations$$},
		{"setModel", "(Ljavax/swing/table/TableModel;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setModel, void, $TableModel*), nullptr, nullptr, setModelmethodAnnotations$$},
		{"setPreferredScrollableViewportSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setPreferredScrollableViewportSize, void, $Dimension*), nullptr, nullptr, setPreferredScrollableViewportSizemethodAnnotations$$},
		{"setRowHeight", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTable, setRowHeight, void, int32_t), nullptr, nullptr, setRowHeightmethodAnnotations$$},
		{"setRowHeight", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, setRowHeight, void, int32_t, int32_t), nullptr, nullptr, setRowHeightmethodAnnotations$$$1},
		{"setRowMargin", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTable, setRowMargin, void, int32_t), nullptr, nullptr, setRowMarginmethodAnnotations$$},
		{"setRowSelectionAllowed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setRowSelectionAllowed, void, bool), nullptr, nullptr, setRowSelectionAllowedmethodAnnotations$$},
		{"setRowSelectionInterval", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable, setRowSelectionInterval, void, int32_t, int32_t)},
		{"setRowSorter", "(Ljavax/swing/RowSorter;)V", "(Ljavax/swing/RowSorter<+Ljavax/swing/table/TableModel;>;)V", $PUBLIC, $virtualMethod(JTable, setRowSorter, void, $RowSorter*), nullptr, nullptr, setRowSortermethodAnnotations$$},
		{"setSelectionBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setSelectionBackground, void, $Color*), nullptr, nullptr, setSelectionBackgroundmethodAnnotations$$},
		{"setSelectionForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setSelectionForeground, void, $Color*), nullptr, nullptr, setSelectionForegroundmethodAnnotations$$},
		{"setSelectionMode", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTable, setSelectionMode, void, int32_t), nullptr, nullptr, setSelectionModemethodAnnotations$$},
		{"setSelectionModel", "(Ljavax/swing/ListSelectionModel;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setSelectionModel, void, $ListSelectionModel*), nullptr, nullptr, setSelectionModelmethodAnnotations$$},
		{"setShowGrid", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setShowGrid, void, bool), nullptr, nullptr, setShowGridmethodAnnotations$$},
		{"setShowHorizontalLines", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setShowHorizontalLines, void, bool), nullptr, nullptr, setShowHorizontalLinesmethodAnnotations$$},
		{"setShowVerticalLines", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setShowVerticalLines, void, bool), nullptr, nullptr, setShowVerticalLinesmethodAnnotations$$},
		{"setSurrendersFocusOnKeystroke", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setSurrendersFocusOnKeystroke, void, bool)},
		{"setTableHeader", "(Ljavax/swing/table/JTableHeader;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setTableHeader, void, $JTableHeader*), nullptr, nullptr, setTableHeadermethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/TableUI;)V", nullptr, $PUBLIC, $virtualMethod(JTable, setUI, void, $TableUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(JTable, setUIProperty, void, $String*, Object$*)},
		{"setUpdateSelectionOnSort", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTable, setUpdateSelectionOnSort, void, bool), nullptr, nullptr, setUpdateSelectionOnSortmethodAnnotations$$},
		{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, $virtualMethod(JTable, setValueAt, void, Object$*, int32_t, int32_t)},
		{"setWidthsFromPreferredWidths", "(Z)V", nullptr, $PRIVATE, $method(JTable, setWidthsFromPreferredWidths, void, bool)},
		{"sizeColumnsToFit", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JTable, sizeColumnsToFit, void, bool), nullptr, nullptr, sizeColumnsToFitmethodAnnotations$$},
		{"sizeColumnsToFit", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTable, sizeColumnsToFit, void, int32_t)},
		{"sortedTableChanged", "(Ljavax/swing/event/RowSorterEvent;Ljavax/swing/event/TableModelEvent;)V", nullptr, $PRIVATE, $method(JTable, sortedTableChanged, void, $RowSorterEvent*, $TableModelEvent*)},
		{"sorterChanged", "(Ljavax/swing/event/RowSorterEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, sorterChanged, void, $RowSorterEvent*)},
		{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, tableChanged, void, $TableModelEvent*)},
		{"tableRowsDeleted", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PRIVATE, $method(JTable, tableRowsDeleted, void, $TableModelEvent*)},
		{"tableRowsInserted", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PRIVATE, $method(JTable, tableRowsInserted, void, $TableModelEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"trailingEdge", "(Ljava/awt/Rectangle;I)I", nullptr, $PRIVATE, $method(JTable, trailingEdge, int32_t, $Rectangle*, int32_t)},
		{"unconfigureEnclosingScrollPane", "()V", nullptr, $PROTECTED, $virtualMethod(JTable, unconfigureEnclosingScrollPane, void)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JTable, updateUI, void)},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTable, valueChanged, void, $ListSelectionEvent*)},
		{"viewIndexForColumn", "(Ljavax/swing/table/TableColumn;)I", nullptr, $PRIVATE, $method(JTable, viewIndexForColumn, int32_t, $TableColumn*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JTable, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$6", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"javax.swing.JTable$AccessibleJTable", "javax.swing.JTable", "AccessibleJTable", $PROTECTED},
		{"javax.swing.JTable$ThreadSafePrintable", "javax.swing.JTable", "ThreadSafePrintable", $PRIVATE},
		{"javax.swing.JTable$CellEditorRemover", "javax.swing.JTable", "CellEditorRemover", 0},
		{"javax.swing.JTable$BooleanEditor", "javax.swing.JTable", "BooleanEditor", $STATIC},
		{"javax.swing.JTable$NumberEditor", "javax.swing.JTable", "NumberEditor", $STATIC},
		{"javax.swing.JTable$GenericEditor", "javax.swing.JTable", "GenericEditor", $STATIC},
		{"javax.swing.JTable$BooleanRenderer", "javax.swing.JTable", "BooleanRenderer", $STATIC},
		{"javax.swing.JTable$IconRenderer", "javax.swing.JTable", "IconRenderer", $STATIC},
		{"javax.swing.JTable$DateRenderer", "javax.swing.JTable", "DateRenderer", $STATIC},
		{"javax.swing.JTable$DoubleRenderer", "javax.swing.JTable", "DoubleRenderer", $STATIC},
		{"javax.swing.JTable$NumberRenderer", "javax.swing.JTable", "NumberRenderer", $STATIC},
		{"javax.swing.JTable$ModelChange", "javax.swing.JTable", "ModelChange", $PRIVATE | $FINAL},
		{"javax.swing.JTable$SortManager", "javax.swing.JTable", "SortManager", $PRIVATE | $FINAL},
		{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JTable$DropLocation", "javax.swing.JTable", "DropLocation", $PUBLIC | $STATIC | $FINAL},
		{"javax.swing.JTable$PrintMode", "javax.swing.JTable", "PrintMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"javax.swing.JTable$5", nullptr, nullptr, 0},
		{"javax.swing.JTable$4", nullptr, nullptr, 0},
		{"javax.swing.JTable$3", nullptr, nullptr, 0},
		{"javax.swing.JTable$2", nullptr, nullptr, 0},
		{"javax.swing.JTable$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component which displays data in a two dimensional grid."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JTable",
		"javax.swing.JComponent",
		"javax.swing.event.TableModelListener,javax.swing.Scrollable,javax.swing.event.TableColumnModelListener,javax.swing.event.ListSelectionListener,javax.swing.event.CellEditorListener,javax.accessibility.Accessible,javax.swing.event.RowSorterListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JTable$6,javax.swing.JTable$AccessibleJTable,javax.swing.JTable$AccessibleJTable$AccessibleJTableHeaderCell,javax.swing.JTable$AccessibleJTable$AccessibleJTableCell,javax.swing.JTable$AccessibleJTable$AccessibleTableHeader,javax.swing.JTable$AccessibleJTable$AccessibleJTableModelChange,javax.swing.JTable$ThreadSafePrintable,javax.swing.JTable$ThreadSafePrintable$1,javax.swing.JTable$CellEditorRemover,javax.swing.JTable$BooleanEditor,javax.swing.JTable$NumberEditor,javax.swing.JTable$GenericEditor,javax.swing.JTable$BooleanRenderer,javax.swing.JTable$IconRenderer,javax.swing.JTable$DateRenderer,javax.swing.JTable$DoubleRenderer,javax.swing.JTable$NumberRenderer,javax.swing.JTable$ModelChange,javax.swing.JTable$SortManager,javax.swing.JTable$Resizable3,javax.swing.JTable$Resizable2,javax.swing.JTable$DropLocation,javax.swing.JTable$PrintMode,javax.swing.JTable$5,javax.swing.JTable$4,javax.swing.JTable$3,javax.swing.JTable$2,javax.swing.JTable$1"
	};
	$loadClass(JTable, name, initialize, &classInfo$$, JTable::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable));
	});
	return class$;
}

$Class* JTable::class$ = nullptr;

	} // swing
} // javax