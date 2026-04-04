#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer$1.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer$EmptyIcon.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SortOrder = ::javax::swing::SortOrder;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $DefaultTableCellHeaderRenderer$1 = ::sun::swing::table::DefaultTableCellHeaderRenderer$1;
using $DefaultTableCellHeaderRenderer$EmptyIcon = ::sun::swing::table::DefaultTableCellHeaderRenderer$EmptyIcon;

namespace sun {
	namespace swing {
		namespace table {

$String* DefaultTableCellHeaderRenderer::toString() {
	 return this->$DefaultTableCellRenderer::toString();
}

int32_t DefaultTableCellHeaderRenderer::hashCode() {
	 return this->$DefaultTableCellRenderer::hashCode();
}

bool DefaultTableCellHeaderRenderer::equals(Object$* arg0) {
	 return this->$DefaultTableCellRenderer::equals(arg0);
}

$Object* DefaultTableCellHeaderRenderer::clone() {
	 return this->$DefaultTableCellRenderer::clone();
}

void DefaultTableCellHeaderRenderer::finalize() {
	this->$DefaultTableCellRenderer::finalize();
}

void DefaultTableCellHeaderRenderer::init$() {
	$DefaultTableCellRenderer::init$();
	$set(this, emptyIcon, $new($DefaultTableCellHeaderRenderer$EmptyIcon, this));
	setHorizontalAlignment($JLabel::CENTER);
}

void DefaultTableCellHeaderRenderer::setHorizontalTextPosition(int32_t textPosition) {
	this->horizontalTextPositionSet = true;
	$DefaultTableCellRenderer::setHorizontalTextPosition(textPosition);
}

$Component* DefaultTableCellHeaderRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalObjectStack();
	$var($Icon, sortIcon, nullptr);
	bool isPaintingForPrint = false;
	if (table != nullptr) {
		$var($JTableHeader, header, table->getTableHeader());
		if (header != nullptr) {
			$var($Color, fgColor, nullptr);
			$var($Color, bgColor, nullptr);
			if (hasFocus) {
				$assign(fgColor, $DefaultLookup::getColor(this, this->ui, "TableHeader.focusCellForeground"_s));
				$assign(bgColor, $DefaultLookup::getColor(this, this->ui, "TableHeader.focusCellBackground"_s));
			}
			if (fgColor == nullptr) {
				$assign(fgColor, header->getForeground());
			}
			if (bgColor == nullptr) {
				$assign(bgColor, header->getBackground());
			}
			setForeground(fgColor);
			setBackground(bgColor);
			setFont($(header->getFont()));
			isPaintingForPrint = header->isPaintingForPrint();
		}
		if (!isPaintingForPrint && table->getRowSorter() != nullptr) {
			if (!this->horizontalTextPositionSet) {
				setHorizontalTextPosition($JLabel::LEADING);
			}
			$SortOrder* sortOrder = getColumnSortOrder(table, column);
			if (sortOrder != nullptr) {
				$init($DefaultTableCellHeaderRenderer$1);
				switch ($nc($DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder)->get((sortOrder)->ordinal())) {
				case 1:
					$assign(sortIcon, $DefaultLookup::getIcon(this, this->ui, "Table.ascendingSortIcon"_s));
					break;
				case 2:
					$assign(sortIcon, $DefaultLookup::getIcon(this, this->ui, "Table.descendingSortIcon"_s));
					break;
				case 3:
					$assign(sortIcon, $DefaultLookup::getIcon(this, this->ui, "Table.naturalSortIcon"_s));
					break;
				}
			}
		}
	}
	setText(value == nullptr ? ""_s : $($of(value)->toString()));
	setIcon(sortIcon);
	$set(this, sortArrow, sortIcon);
	$var($Border, border, nullptr);
	if (hasFocus) {
		$assign(border, $DefaultLookup::getBorder(this, this->ui, "TableHeader.focusCellBorder"_s));
	}
	if (border == nullptr) {
		$assign(border, $DefaultLookup::getBorder(this, this->ui, "TableHeader.cellBorder"_s));
	}
	setBorder(border);
	return this;
}

$SortOrder* DefaultTableCellHeaderRenderer::getColumnSortOrder($JTable* table, int32_t column) {
	$init(DefaultTableCellHeaderRenderer);
	$useLocalObjectStack();
	$SortOrder* rv = nullptr;
	if (table == nullptr || table->getRowSorter() == nullptr) {
		return rv;
	}
	$var($List, sortKeys, $$nc($nc(table)->getRowSorter())->getSortKeys());
	bool var$0 = $nc(sortKeys)->size() > 0;
	if (var$0) {
		int32_t var$1 = $$sure($RowSorter$SortKey, sortKeys->get(0))->getColumn();
		var$0 = var$1 == table->convertColumnIndexToModel(column);
	}
	if (var$0) {
		rv = $$sure($RowSorter$SortKey, sortKeys->get(0))->getSortOrder();
	}
	return rv;
}

void DefaultTableCellHeaderRenderer::paintComponent($Graphics* g) {
	bool b = $DefaultLookup::getBoolean(this, this->ui, "TableHeader.rightAlignSortArrow"_s, false);
	if (b && this->sortArrow != nullptr) {
		$nc(this->emptyIcon)->width = this->sortArrow->getIconWidth();
		$nc(this->emptyIcon)->height = $nc(this->sortArrow)->getIconHeight();
		setIcon(this->emptyIcon);
		$DefaultTableCellRenderer::paintComponent(g);
		$var($Point, position, computeIconPosition(g));
		$nc(this->sortArrow)->paintIcon(this, g, $nc(position)->x, $nc(position)->y);
	} else {
		$DefaultTableCellRenderer::paintComponent(g);
	}
}

$Point* DefaultTableCellHeaderRenderer::computeIconPosition($Graphics* g) {
	$useLocalObjectStack();
	$var($FontMetrics, fontMetrics, $nc(g)->getFontMetrics());
	$var($Rectangle, viewR, $new($Rectangle));
	$var($Rectangle, textR, $new($Rectangle));
	$var($Rectangle, iconR, $new($Rectangle));
	$var($Insets, i, getInsets());
	viewR->x = $nc(i)->left;
	viewR->y = i->top;
	viewR->width = getWidth() - (i->left + i->right);
	viewR->height = getHeight() - (i->top + i->bottom);
	$var($String, var$0, getText());
	$var($Icon, var$1, this->sortArrow);
	int32_t var$2 = getVerticalAlignment();
	int32_t var$3 = getHorizontalAlignment();
	int32_t var$4 = getVerticalTextPosition();
	int32_t var$5 = getHorizontalTextPosition();
	$SwingUtilities::layoutCompoundLabel(this, fontMetrics, var$0, var$1, var$2, var$3, var$4, var$5, viewR, iconR, textR, getIconTextGap());
	int32_t var$6 = getWidth() - i->right;
	int32_t x = var$6 - $nc(this->sortArrow)->getIconWidth();
	int32_t y = iconR->y;
	return $new($Point, x, y);
}

DefaultTableCellHeaderRenderer::DefaultTableCellHeaderRenderer() {
}

$Class* DefaultTableCellHeaderRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"horizontalTextPositionSet", "Z", nullptr, $PRIVATE, $field(DefaultTableCellHeaderRenderer, horizontalTextPositionSet)},
		{"sortArrow", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(DefaultTableCellHeaderRenderer, sortArrow)},
		{"emptyIcon", "Lsun/swing/table/DefaultTableCellHeaderRenderer$EmptyIcon;", nullptr, $PRIVATE, $field(DefaultTableCellHeaderRenderer, emptyIcon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultTableCellHeaderRenderer, init$, void)},
		{"computeIconPosition", "(Ljava/awt/Graphics;)Ljava/awt/Point;", nullptr, $PRIVATE, $method(DefaultTableCellHeaderRenderer, computeIconPosition, $Point*, $Graphics*)},
		{"getColumnSortOrder", "(Ljavax/swing/JTable;I)Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultTableCellHeaderRenderer, getColumnSortOrder, $SortOrder*, $JTable*, int32_t)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(DefaultTableCellHeaderRenderer, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(DefaultTableCellHeaderRenderer, paintComponent, void, $Graphics*)},
		{"setHorizontalTextPosition", "(I)V", nullptr, $PUBLIC, $virtualMethod(DefaultTableCellHeaderRenderer, setHorizontalTextPosition, void, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.table.DefaultTableCellHeaderRenderer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"sun.swing.table.DefaultTableCellHeaderRenderer$EmptyIcon", "sun.swing.table.DefaultTableCellHeaderRenderer", "EmptyIcon", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.table.DefaultTableCellHeaderRenderer",
		"javax.swing.table.DefaultTableCellRenderer",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.swing.table.DefaultTableCellHeaderRenderer$1,sun.swing.table.DefaultTableCellHeaderRenderer$EmptyIcon"
	};
	$loadClass(DefaultTableCellHeaderRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultTableCellHeaderRenderer));
	});
	return class$;
}

$Class* DefaultTableCellHeaderRenderer::class$ = nullptr;

		} // table
	} // swing
} // sun