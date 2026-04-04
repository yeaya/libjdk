#include <javax/swing/table/TableColumn.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn$1.h>
#include <jcpp.h>

#undef CELL_RENDERER_PROPERTY
#undef CENTER
#undef COLUMN_WIDTH_PROPERTY
#undef HEADER_RENDERER_PROPERTY
#undef HEADER_VALUE_PROPERTY
#undef MAX_VALUE

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $Component = ::java::awt::Component;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn$1 = ::javax::swing::table::TableColumn$1;

namespace javax {
	namespace swing {
		namespace table {

$String* TableColumn::COLUMN_WIDTH_PROPERTY = nullptr;
$String* TableColumn::HEADER_VALUE_PROPERTY = nullptr;
$String* TableColumn::HEADER_RENDERER_PROPERTY = nullptr;
$String* TableColumn::CELL_RENDERER_PROPERTY = nullptr;

void TableColumn::init$() {
	TableColumn::init$(0);
}

void TableColumn::init$(int32_t modelIndex) {
	TableColumn::init$(modelIndex, 75, nullptr, nullptr);
}

void TableColumn::init$(int32_t modelIndex, int32_t width) {
	TableColumn::init$(modelIndex, width, nullptr, nullptr);
}

void TableColumn::init$(int32_t modelIndex, int32_t width, $TableCellRenderer* cellRenderer, $TableCellEditor* cellEditor) {
	this->modelIndex = modelIndex;
	this->preferredWidth = (this->width = $Math::max(width, 0));
	$set(this, cellRenderer, cellRenderer);
	$set(this, cellEditor, cellEditor);
	this->minWidth = $Math::min(15, this->width);
	this->maxWidth = $Integer::MAX_VALUE;
	this->isResizable = true;
	this->resizedPostingDisableCount = 0;
	$set(this, headerValue, nullptr);
}

void TableColumn::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->changeSupport != nullptr) {
		this->changeSupport->firePropertyChange(propertyName, oldValue, newValue);
	}
}

void TableColumn::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Integer::valueOf(oldValue));
		firePropertyChange(propertyName, var$0, $($Integer::valueOf(newValue)));
	}
}

void TableColumn::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Boolean::valueOf(oldValue));
		firePropertyChange(propertyName, var$0, $($Boolean::valueOf(newValue)));
	}
}

void TableColumn::setModelIndex(int32_t modelIndex) {
	int32_t old = this->modelIndex;
	this->modelIndex = modelIndex;
	firePropertyChange("modelIndex"_s, old, modelIndex);
}

int32_t TableColumn::getModelIndex() {
	return this->modelIndex;
}

void TableColumn::setIdentifier(Object$* identifier) {
	$var($Object, old, this->identifier);
	$set(this, identifier, identifier);
	firePropertyChange("identifier"_s, old, identifier);
}

$Object* TableColumn::getIdentifier() {
	return (this->identifier != nullptr) ? this->identifier : getHeaderValue();
}

void TableColumn::setHeaderValue(Object$* headerValue) {
	$var($Object, old, this->headerValue);
	$set(this, headerValue, headerValue);
	firePropertyChange("headerValue"_s, old, headerValue);
}

$Object* TableColumn::getHeaderValue() {
	return this->headerValue;
}

void TableColumn::setHeaderRenderer($TableCellRenderer* headerRenderer) {
	$var($TableCellRenderer, old, this->headerRenderer);
	$set(this, headerRenderer, headerRenderer);
	firePropertyChange("headerRenderer"_s, old, headerRenderer);
}

$TableCellRenderer* TableColumn::getHeaderRenderer() {
	return this->headerRenderer;
}

void TableColumn::setCellRenderer($TableCellRenderer* cellRenderer) {
	$var($TableCellRenderer, old, this->cellRenderer);
	$set(this, cellRenderer, cellRenderer);
	firePropertyChange("cellRenderer"_s, old, cellRenderer);
}

$TableCellRenderer* TableColumn::getCellRenderer() {
	return this->cellRenderer;
}

void TableColumn::setCellEditor($TableCellEditor* cellEditor) {
	$var($TableCellEditor, old, this->cellEditor);
	$set(this, cellEditor, cellEditor);
	firePropertyChange("cellEditor"_s, old, cellEditor);
}

$TableCellEditor* TableColumn::getCellEditor() {
	return this->cellEditor;
}

void TableColumn::setWidth(int32_t width) {
	int32_t old = this->width;
	this->width = $Math::min($Math::max(width, this->minWidth), this->maxWidth);
	firePropertyChange("width"_s, old, this->width);
}

int32_t TableColumn::getWidth() {
	return this->width;
}

void TableColumn::setPreferredWidth(int32_t preferredWidth) {
	int32_t old = this->preferredWidth;
	this->preferredWidth = $Math::min($Math::max(preferredWidth, this->minWidth), this->maxWidth);
	firePropertyChange("preferredWidth"_s, old, this->preferredWidth);
}

int32_t TableColumn::getPreferredWidth() {
	return this->preferredWidth;
}

void TableColumn::setMinWidth(int32_t minWidth) {
	int32_t old = this->minWidth;
	this->minWidth = $Math::max($Math::min(minWidth, this->maxWidth), 0);
	if (this->width < this->minWidth) {
		setWidth(this->minWidth);
	}
	if (this->preferredWidth < this->minWidth) {
		setPreferredWidth(this->minWidth);
	}
	firePropertyChange("minWidth"_s, old, this->minWidth);
}

int32_t TableColumn::getMinWidth() {
	return this->minWidth;
}

void TableColumn::setMaxWidth(int32_t maxWidth) {
	int32_t old = this->maxWidth;
	this->maxWidth = $Math::max(this->minWidth, maxWidth);
	if (this->width > this->maxWidth) {
		setWidth(this->maxWidth);
	}
	if (this->preferredWidth > this->maxWidth) {
		setPreferredWidth(this->maxWidth);
	}
	firePropertyChange("maxWidth"_s, old, this->maxWidth);
}

int32_t TableColumn::getMaxWidth() {
	return this->maxWidth;
}

void TableColumn::setResizable(bool isResizable) {
	bool old = this->isResizable;
	this->isResizable = isResizable;
	firePropertyChange("isResizable"_s, old, this->isResizable);
}

bool TableColumn::getResizable() {
	return this->isResizable;
}

void TableColumn::sizeWidthToFit() {
	$useLocalObjectStack();
	if (this->headerRenderer == nullptr) {
		return;
	}
	$var($Component, c, $nc(this->headerRenderer)->getTableCellRendererComponent(nullptr, $(getHeaderValue()), false, false, 0, 0));
	setMinWidth($nc($($nc(c)->getMinimumSize()))->width);
	setMaxWidth($nc($(c->getMaximumSize()))->width);
	setPreferredWidth($nc($(c->getPreferredSize()))->width);
	setWidth(getPreferredWidth());
}

void TableColumn::disableResizedPosting() {
	++this->resizedPostingDisableCount;
}

void TableColumn::enableResizedPosting() {
	--this->resizedPostingDisableCount;
}

void TableColumn::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($SwingPropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(listener);
	}
}

void TableColumn::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport != nullptr) {
			this->changeSupport->removePropertyChangeListener(listener);
		}
	}
}

$PropertyChangeListenerArray* TableColumn::getPropertyChangeListeners() {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners();
	}
}

$TableCellRenderer* TableColumn::createDefaultHeaderRenderer() {
	$var($DefaultTableCellRenderer, label, $new($TableColumn$1, this));
	label->setHorizontalAlignment($JLabel::CENTER);
	return label;
}

TableColumn::TableColumn() {
}

void TableColumn::clinit$($Class* clazz) {
	$assignStatic(TableColumn::COLUMN_WIDTH_PROPERTY, "columWidth"_s);
	$assignStatic(TableColumn::HEADER_VALUE_PROPERTY, "headerValue"_s);
	$assignStatic(TableColumn::HEADER_RENDERER_PROPERTY, "headerRenderer"_s);
	$assignStatic(TableColumn::CELL_RENDERER_PROPERTY, "cellRenderer"_s);
}

$Class* TableColumn::load$($String* name, bool initialize) {
	$CompoundAttribute resizedPostingDisableCountfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"COLUMN_WIDTH_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, COLUMN_WIDTH_PROPERTY)},
		{"HEADER_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, HEADER_VALUE_PROPERTY)},
		{"HEADER_RENDERER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, HEADER_RENDERER_PROPERTY)},
		{"CELL_RENDERER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, CELL_RENDERER_PROPERTY)},
		{"modelIndex", "I", nullptr, $PROTECTED, $field(TableColumn, modelIndex)},
		{"identifier", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(TableColumn, identifier)},
		{"width", "I", nullptr, $PROTECTED, $field(TableColumn, width)},
		{"minWidth", "I", nullptr, $PROTECTED, $field(TableColumn, minWidth)},
		{"preferredWidth", "I", nullptr, $PRIVATE, $field(TableColumn, preferredWidth)},
		{"maxWidth", "I", nullptr, $PROTECTED, $field(TableColumn, maxWidth)},
		{"headerRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED, $field(TableColumn, headerRenderer)},
		{"headerValue", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(TableColumn, headerValue)},
		{"cellRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED, $field(TableColumn, cellRenderer)},
		{"cellEditor", "Ljavax/swing/table/TableCellEditor;", nullptr, $PROTECTED, $field(TableColumn, cellEditor)},
		{"isResizable", "Z", nullptr, $PROTECTED, $field(TableColumn, isResizable)},
		{"resizedPostingDisableCount", "I", nullptr, $PROTECTED | $TRANSIENT | $DEPRECATED, $field(TableColumn, resizedPostingDisableCount), resizedPostingDisableCountfieldAnnotations$$},
		{"changeSupport", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $PRIVATE, $field(TableColumn, changeSupport)},
		{}
	};
	$CompoundAttribute disableResizedPostingmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute enableResizedPostingmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute setCellEditormethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The editor to use for cell values."},
		{}
	};
	$CompoundAttribute setCellEditormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCellEditormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setCellRenderermethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The renderer to use for cell values."},
		{}
	};
	$CompoundAttribute setCellRenderermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCellRenderermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setHeaderRenderermethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The header renderer."},
		{}
	};
	$CompoundAttribute setHeaderRenderermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHeaderRenderermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setHeaderValuemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The text to be used by the header renderer."},
		{}
	};
	$CompoundAttribute setHeaderValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHeaderValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setIdentifiermethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "A unique identifier for this column."},
		{}
	};
	$CompoundAttribute setIdentifiermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setIdentifiermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaxWidthmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The maximum width of the column."},
		{}
	};
	$CompoundAttribute setMaxWidthmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaxWidthmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMinWidthmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The minimum width of the column."},
		{}
	};
	$CompoundAttribute setMinWidthmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMinWidthmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setModelIndexmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The model index."},
		{}
	};
	$CompoundAttribute setModelIndexmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setModelIndexmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPreferredWidthmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The preferred width of the column."},
		{}
	};
	$CompoundAttribute setPreferredWidthmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPreferredWidthmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setResizablemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Whether or not this column can be resized."},
		{}
	};
	$CompoundAttribute setResizablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setResizablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setWidthmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The width of the column."},
		{}
	};
	$CompoundAttribute setWidthmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setWidthmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TableColumn, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(TableColumn, init$, void, int32_t)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(TableColumn, init$, void, int32_t, int32_t)},
		{"<init>", "(IILjavax/swing/table/TableCellRenderer;Ljavax/swing/table/TableCellEditor;)V", nullptr, $PUBLIC, $method(TableColumn, init$, void, int32_t, int32_t, $TableCellRenderer*, $TableCellEditor*)},
		{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TableColumn, addPropertyChangeListener, void, $PropertyChangeListener*)},
		{"createDefaultHeaderRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED, $virtualMethod(TableColumn, createDefaultHeaderRenderer, $TableCellRenderer*)},
		{"disableResizedPosting", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(TableColumn, disableResizedPosting, void), nullptr, nullptr, disableResizedPostingmethodAnnotations$$},
		{"enableResizedPosting", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(TableColumn, enableResizedPosting, void), nullptr, nullptr, enableResizedPostingmethodAnnotations$$},
		{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(TableColumn, firePropertyChange, void, $String*, Object$*, Object$*)},
		{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(TableColumn, firePropertyChange, void, $String*, int32_t, int32_t)},
		{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(TableColumn, firePropertyChange, void, $String*, bool, bool)},
		{"getCellEditor", "()Ljavax/swing/table/TableCellEditor;", nullptr, $PUBLIC, $virtualMethod(TableColumn, getCellEditor, $TableCellEditor*)},
		{"getCellRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PUBLIC, $virtualMethod(TableColumn, getCellRenderer, $TableCellRenderer*)},
		{"getHeaderRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PUBLIC, $virtualMethod(TableColumn, getHeaderRenderer, $TableCellRenderer*)},
		{"getHeaderValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TableColumn, getHeaderValue, $Object*)},
		{"getIdentifier", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TableColumn, getIdentifier, $Object*)},
		{"getMaxWidth", "()I", nullptr, $PUBLIC, $virtualMethod(TableColumn, getMaxWidth, int32_t)},
		{"getMinWidth", "()I", nullptr, $PUBLIC, $virtualMethod(TableColumn, getMinWidth, int32_t)},
		{"getModelIndex", "()I", nullptr, $PUBLIC, $virtualMethod(TableColumn, getModelIndex, int32_t)},
		{"getPreferredWidth", "()I", nullptr, $PUBLIC, $virtualMethod(TableColumn, getPreferredWidth, int32_t)},
		{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TableColumn, getPropertyChangeListeners, $PropertyChangeListenerArray*)},
		{"getResizable", "()Z", nullptr, $PUBLIC, $virtualMethod(TableColumn, getResizable, bool)},
		{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(TableColumn, getWidth, int32_t)},
		{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TableColumn, removePropertyChangeListener, void, $PropertyChangeListener*)},
		{"setCellEditor", "(Ljavax/swing/table/TableCellEditor;)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setCellEditor, void, $TableCellEditor*), nullptr, nullptr, setCellEditormethodAnnotations$$},
		{"setCellRenderer", "(Ljavax/swing/table/TableCellRenderer;)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setCellRenderer, void, $TableCellRenderer*), nullptr, nullptr, setCellRenderermethodAnnotations$$},
		{"setHeaderRenderer", "(Ljavax/swing/table/TableCellRenderer;)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setHeaderRenderer, void, $TableCellRenderer*), nullptr, nullptr, setHeaderRenderermethodAnnotations$$},
		{"setHeaderValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setHeaderValue, void, Object$*), nullptr, nullptr, setHeaderValuemethodAnnotations$$},
		{"setIdentifier", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setIdentifier, void, Object$*), nullptr, nullptr, setIdentifiermethodAnnotations$$},
		{"setMaxWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setMaxWidth, void, int32_t), nullptr, nullptr, setMaxWidthmethodAnnotations$$},
		{"setMinWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setMinWidth, void, int32_t), nullptr, nullptr, setMinWidthmethodAnnotations$$},
		{"setModelIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setModelIndex, void, int32_t), nullptr, nullptr, setModelIndexmethodAnnotations$$},
		{"setPreferredWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setPreferredWidth, void, int32_t), nullptr, nullptr, setPreferredWidthmethodAnnotations$$},
		{"setResizable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setResizable, void, bool), nullptr, nullptr, setResizablemethodAnnotations$$},
		{"setWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(TableColumn, setWidth, void, int32_t), nullptr, nullptr, setWidthmethodAnnotations$$},
		{"sizeWidthToFit", "()V", nullptr, $PUBLIC, $virtualMethod(TableColumn, sizeWidthToFit, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.table.TableColumn$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.table.TableColumn",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.table.TableColumn$1"
	};
	$loadClass(TableColumn, name, initialize, &classInfo$$, TableColumn::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TableColumn);
	});
	return class$;
}

$Class* TableColumn::class$ = nullptr;

		} // table
	} // swing
} // javax