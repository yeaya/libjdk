#include <javax/swing/plaf/basic/BasicFileChooserUI$GlobFilter.h>
#include <java/io/File.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE

using $File = ::java::io::File;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFileChooserUI$GlobFilter::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FileFilter::init$();
}

void BasicFileChooserUI$GlobFilter::setPattern($String* globPattern) {
	$useLocalObjectStack();
	$var($chars, gPat, $nc(globPattern)->toCharArray());
	$var($chars, rPat, $new($chars, gPat->length * 2));
	$init($File);
	bool isWin32 = ($File::separatorChar == u'\\');
	bool inBrackets = false;
	int32_t j = 0;
	$set(this, globPattern, globPattern);
	if (isWin32) {
		int32_t len = gPat->length;
		if (globPattern->endsWith("*.*"_s)) {
			len -= 2;
		}
		for (int32_t i = 0; i < len; ++i) {
			switch (gPat->get(i)) {
			case u'*':
				rPat->set(j++, u'.');
				rPat->set(j++, u'*');
				break;
			case u'?':
				rPat->set(j++, u'.');
				break;
			case u'\\':
				rPat->set(j++, u'\\');
				rPat->set(j++, u'\\');
				break;
			default:
				if ("+()^$.{}[]"_s->indexOf(gPat->get(i)) >= 0) {
					rPat->set(j++, u'\\');
				}
				rPat->set(j++, gPat->get(i));
				break;
			}
		}
	} else {
		for (int32_t i = 0; i < gPat->length; ++i) {
			switch (gPat->get(i)) {
			case u'*':
				if (!inBrackets) {
					rPat->set(j++, u'.');
				}
				rPat->set(j++, u'*');
				break;
			case u'?':
				rPat->set(j++, inBrackets ? u'?' : u'.');
				break;
			case u'[':
				inBrackets = true;
				rPat->set(j++, gPat->get(i));
				if (i < gPat->length - 1) {
					switch (gPat->get(i + 1)) {
					case u'!':
					case u'^':
						rPat->set(j++, u'^');
						++i;
						break;
					case u']':
						rPat->set(j++, gPat->get(++i));
						break;
					}
				}
				break;
			case u']':
				rPat->set(j++, gPat->get(i));
				inBrackets = false;
				break;
			case u'\\':
				if (i == 0 && gPat->length > 1 && gPat->get(1) == u'~') {
					rPat->set(j++, gPat->get(++i));
				} else {
					rPat->set(j++, u'\\');
					if (i < gPat->length - 1 && "*?[]"_s->indexOf(gPat->get(i + 1)) >= 0) {
						rPat->set(j++, gPat->get(++i));
					} else {
						rPat->set(j++, u'\\');
					}
				}
				break;
			default:
				if (!$Character::isLetterOrDigit(gPat->get(i))) {
					rPat->set(j++, u'\\');
				}
				rPat->set(j++, gPat->get(i));
				break;
			}
		}
	}
	$set(this, pattern, $Pattern::compile($$new($String, rPat, 0, j), $Pattern::CASE_INSENSITIVE));
}

bool BasicFileChooserUI$GlobFilter::accept($File* f) {
	$useLocalObjectStack();
	if (f == nullptr) {
		return false;
	}
	if ($nc(f)->isDirectory()) {
		return true;
	}
	return $$nc($nc(this->pattern)->matcher($(f->getName())))->matches();
}

$String* BasicFileChooserUI$GlobFilter::getDescription() {
	return this->globPattern;
}

BasicFileChooserUI$GlobFilter::BasicFileChooserUI$GlobFilter() {
}

$Class* BasicFileChooserUI$GlobFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$GlobFilter, this$0)},
		{"pattern", "Ljava/util/regex/Pattern;", nullptr, 0, $field(BasicFileChooserUI$GlobFilter, pattern)},
		{"globPattern", "Ljava/lang/String;", nullptr, 0, $field(BasicFileChooserUI$GlobFilter, globPattern)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, 0, $method(BasicFileChooserUI$GlobFilter, init$, void, $BasicFileChooserUI*)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$GlobFilter, accept, bool, $File*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$GlobFilter, getDescription, $String*)},
		{"setPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$GlobFilter, setPattern, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$GlobFilter", "javax.swing.plaf.basic.BasicFileChooserUI", "GlobFilter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$GlobFilter",
		"javax.swing.filechooser.FileFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$GlobFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicFileChooserUI$GlobFilter);
	});
	return class$;
}

$Class* BasicFileChooserUI$GlobFilter::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax