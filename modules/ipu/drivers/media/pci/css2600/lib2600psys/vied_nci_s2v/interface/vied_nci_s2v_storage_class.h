#ifndef _VIED_NCI_S2V_STORAGE_CLASS_H
#define _VIED_NCI_S2V_STORAGE_CLASS_H


#include "storage_class.h"

#ifndef _INLINE_VIED_NCI_S2V
#define VIED_NCI_S2V_STORAGE_CLASS_H STORAGE_CLASS_EXTERN
#define VIED_NCI_S2V_STORAGE_CLASS_C
#else				/* _INLINE_VIED_NCI_S2V */
#define VIED_NCI_S2V_STORAGE_CLASS_H STORAGE_CLASS_INLINE
#define VIED_NCI_S2V_STORAGE_CLASS_C STORAGE_CLASS_INLINE
#endif				/* _INLINE_VIED_NCI_S2V */

#endif /* _VIED_NCI_S2V_STORAGE_CLASS_H */
