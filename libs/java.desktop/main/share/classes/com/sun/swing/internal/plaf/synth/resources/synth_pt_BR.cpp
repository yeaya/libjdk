#include <com/sun/swing/internal/plaf/synth/resources/synth_pt_BR.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace synth {
						namespace resources {

void synth_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* synth_pt_BR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.detailsViewActionLabel.textAndMnemonic"_s,
			"Detalhes"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonAccessibleName"_s,
			"Detalhes"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s,
			"Detalhes"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileAttrHeader.textAndMnemonic"_s,
			"Atributos"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDateHeader.textAndMnemonic"_s,
			"Modificado"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameHeader.textAndMnemonic"_s,
			"Nome"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			"&Nome do Arquivo:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeHeader.textAndMnemonic"_s,
			"Tamanho"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileTypeHeader.textAndMnemonic"_s,
			"Tipo"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesOfTypeLabel.textAndMnemonic"_s,
			"Arquivos do &Tipo:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.folderNameLabel.textAndMnemonic"_s,
			"&Nome da Pasta:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderAccessibleName"_s,
			u"Início"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderToolTip.textAndMnemonic"_s,
			u"Início"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewActionLabel.textAndMnemonic"_s,
			"Lista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonAccessibleName"_s,
			"Lista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonToolTip.textAndMnemonic"_s,
			"Lista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.lookInLabel.textAndMnemonic"_s,
			"Pesquisar &em:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			"Nova Pasta"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderActionLabel.textAndMnemonic"_s,
			"Nova Pasta"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderToolTip.textAndMnemonic"_s,
			"Criar Nova Pasta"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.refreshActionLabel.textAndMnemonic"_s,
			"Atualizar"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveInLabel.textAndMnemonic"_s,
			"Salvar Em:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderAccessibleName"_s,
			"Acima"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderToolTip.textAndMnemonic"_s,
			u"Um Nível Acima"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuLabel.textAndMnemonic"_s,
			"Exibir"_s
		})
	});
}

synth_pt_BR::synth_pt_BR() {
}

$Class* synth_pt_BR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(synth_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(synth_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.synth.resources.synth_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(synth_pt_BR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(synth_pt_BR);
	});
	return class$;
}

$Class* synth_pt_BR::class$ = nullptr;

						} // resources
					} // synth
				} // plaf
			} // internal
		} // swing
	} // sun
} // com