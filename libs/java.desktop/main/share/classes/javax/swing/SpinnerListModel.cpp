#include <javax/swing/SpinnerListModel.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;

namespace javax {
	namespace swing {

void SpinnerListModel::init$($List* values) {
	$AbstractSpinnerModel::init$();
	if (values == nullptr || values->size() == 0) {
		$throwNew($IllegalArgumentException, "SpinnerListModel(List) expects non-null non-empty List"_s);
	}
	$set(this, list, values);
	this->index = 0;
}

void SpinnerListModel::init$($ObjectArray* values) {
	$AbstractSpinnerModel::init$();
	if (values == nullptr || values->length == 0) {
		$throwNew($IllegalArgumentException, "SpinnerListModel(Object[]) expects non-null non-empty Object[]"_s);
	}
	$set(this, list, $Arrays::asList(values));
	this->index = 0;
}

void SpinnerListModel::init$() {
	SpinnerListModel::init$($$new($ObjectArray, {"empty"_s}));
}

$List* SpinnerListModel::getList() {
	return this->list;
}

void SpinnerListModel::setList($List* list) {
	if ((list == nullptr) || (list->size() == 0)) {
		$throwNew($IllegalArgumentException, "invalid list"_s);
	}
	if (!$nc(list)->equals(this->list)) {
		$set(this, list, list);
		this->index = 0;
		fireStateChanged();
	}
}

$Object* SpinnerListModel::getValue() {
	return $nc(this->list)->get(this->index);
}

void SpinnerListModel::setValue(Object$* elt) {
	int32_t index = $nc(this->list)->indexOf(elt);
	if (index == -1) {
		$throwNew($IllegalArgumentException, "invalid sequence element"_s);
	} else if (index != this->index) {
		this->index = index;
		fireStateChanged();
	}
}

$Object* SpinnerListModel::getNextValue() {
	return (this->index >= ($nc(this->list)->size() - 1)) ? ($Object*)nullptr : this->list->get(this->index + 1);
}

$Object* SpinnerListModel::getPreviousValue() {
	return (this->index <= 0) ? ($Object*)nullptr : $nc(this->list)->get(this->index - 1);
}

$Object* SpinnerListModel::findNextMatch($String* substring) {
	$useLocalObjectStack();
	int32_t max = $nc(this->list)->size();
	if (max == 0) {
		return nullptr;
	}
	int32_t counter = this->index;
	do {
		$var($Object, value, this->list->get(counter));
		if (value != nullptr) {
			$var($String, string, value->toString());
			if (string != nullptr && string->startsWith(substring)) {
				return value;
			}
		}
		counter = $mod((counter + 1), max);
	} while (counter != this->index);
	return nullptr;
}

SpinnerListModel::SpinnerListModel() {
}

$Class* SpinnerListModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", "Ljava/util/List<*>;", $PRIVATE, $field(SpinnerListModel, list)},
		{"index", "I", nullptr, $PRIVATE, $field(SpinnerListModel, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<*>;)V", $PUBLIC, $method(SpinnerListModel, init$, void, $List*)},
		{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(SpinnerListModel, init$, void, $ObjectArray*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SpinnerListModel, init$, void)},
		{"findNextMatch", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(SpinnerListModel, findNextMatch, $Object*, $String*)},
		{"getList", "()Ljava/util/List;", "()Ljava/util/List<*>;", $PUBLIC, $virtualMethod(SpinnerListModel, getList, $List*)},
		{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SpinnerListModel, getNextValue, $Object*)},
		{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SpinnerListModel, getPreviousValue, $Object*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SpinnerListModel, getValue, $Object*)},
		{"setList", "(Ljava/util/List;)V", "(Ljava/util/List<*>;)V", $PUBLIC, $virtualMethod(SpinnerListModel, setList, void, $List*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SpinnerListModel, setValue, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.SpinnerListModel",
		"javax.swing.AbstractSpinnerModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SpinnerListModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SpinnerListModel));
	});
	return class$;
}

$Class* SpinnerListModel::class$ = nullptr;

	} // swing
} // javax