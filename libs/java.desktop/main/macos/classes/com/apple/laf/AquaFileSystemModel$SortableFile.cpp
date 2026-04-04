#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <java/util/Date.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $Objects = ::java::util::Objects;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileSystemModel$SortableFile::init$($AquaFileSystemModel* this$0, $File* f) {
	$set(this, this$0, this$0);
	$set(this, fFile, f);
	$set(this, fName, $nc(this->fFile)->getName());
	this->fDateValue = this->fFile->lastModified();
	$set(this, fDate, $new($Date, this->fDateValue));
}

$Object* AquaFileSystemModel$SortableFile::getValueAt(int32_t col) {
	if (col == 0) {
		return $of(this->fFile);
	}
	return $of(this->fDate);
}

bool AquaFileSystemModel$SortableFile::equals(Object$* other) {
	$var(AquaFileSystemModel$SortableFile, otherFile, $cast(AquaFileSystemModel$SortableFile, other));
	return $nc($nc(otherFile)->fFile)->equals(this->fFile);
}

int32_t AquaFileSystemModel$SortableFile::hashCode() {
	return $Objects::hashCode(this->fFile);
}

AquaFileSystemModel$SortableFile::AquaFileSystemModel$SortableFile() {
}

$Class* AquaFileSystemModel$SortableFile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$SortableFile, this$0)},
		{"fFile", "Ljava/io/File;", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fFile)},
		{"fName", "Ljava/lang/String;", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fName)},
		{"fDateValue", "J", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fDateValue)},
		{"fDate", "Ljava/util/Date;", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fDate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;Ljava/io/File;)V", nullptr, 0, $method(AquaFileSystemModel$SortableFile, init$, void, $AquaFileSystemModel*, $File*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AquaFileSystemModel$SortableFile, equals, bool, Object$*)},
		{"getValueAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaFileSystemModel$SortableFile, getValueAt, $Object*, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AquaFileSystemModel$SortableFile, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileSystemModel$SortableFile", "com.apple.laf.AquaFileSystemModel", "SortableFile", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileSystemModel$SortableFile",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileSystemModel"
	};
	$loadClass(AquaFileSystemModel$SortableFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileSystemModel$SortableFile);
	});
	return class$;
}

$Class* AquaFileSystemModel$SortableFile::class$ = nullptr;

		} // laf
	} // apple
} // com