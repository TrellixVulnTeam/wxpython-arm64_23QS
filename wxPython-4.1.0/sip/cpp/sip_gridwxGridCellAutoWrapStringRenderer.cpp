/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_grid.h"

        #include <wx/grid.h>

        #include <wx/gdicmn.h>
        #include <wx/grid.h>
        #include <wx/grid.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/grid.h>


class sipwxGridCellAutoWrapStringRenderer : public  ::wxGridCellAutoWrapStringRenderer
{
public:
    sipwxGridCellAutoWrapStringRenderer();
    virtual ~sipwxGridCellAutoWrapStringRenderer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int GetBestWidth( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int) SIP_OVERRIDE;
    int GetBestHeight( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int) SIP_OVERRIDE;
     ::wxSize GetBestSize( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int) SIP_OVERRIDE;
    void Draw( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,const  ::wxRect&,int,int,bool) SIP_OVERRIDE;
     ::wxGridCellRenderer* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxGridCellAutoWrapStringRenderer(const sipwxGridCellAutoWrapStringRenderer &);
    sipwxGridCellAutoWrapStringRenderer &operator = (const sipwxGridCellAutoWrapStringRenderer &);

    char sipPyMethods[5];
};

sipwxGridCellAutoWrapStringRenderer::sipwxGridCellAutoWrapStringRenderer():  ::wxGridCellAutoWrapStringRenderer(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridCellAutoWrapStringRenderer::~sipwxGridCellAutoWrapStringRenderer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

int sipwxGridCellAutoWrapStringRenderer::GetBestWidth( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col,int height)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_GetBestWidth);

    if (!sipMeth)
        return  ::wxGridCellAutoWrapStringRenderer::GetBestWidth(grid,attr,dc,row,col,height);

    extern int sipVH__grid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int);

    return sipVH__grid_3(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col, height);
}

int sipwxGridCellAutoWrapStringRenderer::GetBestHeight( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col,int width)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_GetBestHeight);

    if (!sipMeth)
        return  ::wxGridCellAutoWrapStringRenderer::GetBestHeight(grid,attr,dc,row,col,width);

    extern int sipVH__grid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int);

    return sipVH__grid_3(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col, width);
}

 ::wxSize sipwxGridCellAutoWrapStringRenderer::GetBestSize( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_GetBestSize);

    if (!sipMeth)
        return  ::wxGridCellAutoWrapStringRenderer::GetBestSize(grid,attr,dc,row,col);

    extern  ::wxSize sipVH__grid_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int);

    return sipVH__grid_2(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col);
}

void sipwxGridCellAutoWrapStringRenderer::Draw( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,const  ::wxRect& rect,int row,int col,bool isSelected)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_Draw);

    if (!sipMeth)
    {
         ::wxGridCellAutoWrapStringRenderer::Draw(grid,attr,dc,rect,row,col,isSelected);
        return;
    }

    extern void sipVH__grid_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,const  ::wxRect&,int,int,bool);

    sipVH__grid_1(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, rect, row, col, isSelected);
}

 ::wxGridCellRenderer* sipwxGridCellAutoWrapStringRenderer::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxGridCellAutoWrapStringRenderer::Clone();

    extern  ::wxGridCellRenderer* sipVH__grid_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxGridCellAutoWrapStringRenderer_Clone, "Clone(self) -> GridCellRenderer");

extern "C" {static PyObject *meth_wxGridCellAutoWrapStringRenderer_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellAutoWrapStringRenderer_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridCellAutoWrapStringRenderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellAutoWrapStringRenderer, &sipCpp))
        {
             ::wxGridCellRenderer*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridCellAutoWrapStringRenderer::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGridCellRenderer,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellAutoWrapStringRenderer, sipName_Clone, doc_wxGridCellAutoWrapStringRenderer_Clone);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellAutoWrapStringRenderer_Draw, "Draw(self, grid: Grid, attr: GridCellAttr, dc: DC, rect: Rect, row: int, col: int, isSelected: bool)");

extern "C" {static PyObject *meth_wxGridCellAutoWrapStringRenderer_Draw(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellAutoWrapStringRenderer_Draw(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGrid* grid;
         ::wxGridCellAttr* attr;
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
        int row;
        int col;
        bool isSelected;
         ::wxGridCellAutoWrapStringRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
            sipName_attr,
            sipName_dc,
            sipName_rect,
            sipName_row,
            sipName_col,
            sipName_isSelected,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9J1iib", &sipSelf, sipType_wxGridCellAutoWrapStringRenderer, &sipCpp, sipType_wxGrid, &grid, sipType_wxGridCellAttr, &attr, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, &row, &col, &isSelected))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellAutoWrapStringRenderer::Draw(*grid,*attr,*dc,*rect,row,col,isSelected) : sipCpp->Draw(*grid,*attr,*dc,*rect,row,col,isSelected));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellAutoWrapStringRenderer, sipName_Draw, doc_wxGridCellAutoWrapStringRenderer_Draw);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellAutoWrapStringRenderer_GetBestSize, "GetBestSize(self, grid: Grid, attr: GridCellAttr, dc: DC, row: int, col: int) -> Size");

extern "C" {static PyObject *meth_wxGridCellAutoWrapStringRenderer_GetBestSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellAutoWrapStringRenderer_GetBestSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGrid* grid;
         ::wxGridCellAttr* attr;
         ::wxDC* dc;
        int row;
        int col;
         ::wxGridCellAutoWrapStringRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
            sipName_attr,
            sipName_dc,
            sipName_row,
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9ii", &sipSelf, sipType_wxGridCellAutoWrapStringRenderer, &sipCpp, sipType_wxGrid, &grid, sipType_wxGridCellAttr, &attr, sipType_wxDC, &dc, &row, &col))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxGridCellAutoWrapStringRenderer::GetBestSize(*grid,*attr,*dc,row,col) : sipCpp->GetBestSize(*grid,*attr,*dc,row,col)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellAutoWrapStringRenderer, sipName_GetBestSize, doc_wxGridCellAutoWrapStringRenderer_GetBestSize);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGridCellAutoWrapStringRenderer(void *, const sipTypeDef *);}
static void *cast_wxGridCellAutoWrapStringRenderer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGridCellAutoWrapStringRenderer *sipCpp = reinterpret_cast< ::wxGridCellAutoWrapStringRenderer *>(sipCppV);

    if (targetType == sipType_wxGridCellStringRenderer)
        return static_cast< ::wxGridCellStringRenderer *>(sipCpp);

    if (targetType == sipType_wxGridCellRenderer)
        return static_cast< ::wxGridCellRenderer *>(sipCpp);

    if (targetType == sipType_wxClientDataContainer)
        return static_cast< ::wxClientDataContainer *>(sipCpp);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridCellAutoWrapStringRenderer(void *, int);}
static void release_wxGridCellAutoWrapStringRenderer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGridCellAutoWrapStringRenderer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGridCellAutoWrapStringRenderer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGridCellAutoWrapStringRenderer(sipSimpleWrapper *);}
static void dealloc_wxGridCellAutoWrapStringRenderer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGridCellAutoWrapStringRenderer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridCellAutoWrapStringRenderer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGridCellAutoWrapStringRenderer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridCellAutoWrapStringRenderer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipwxGridCellAutoWrapStringRenderer *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridCellAutoWrapStringRenderer();
            Py_END_ALLOW_THREADS

            *sipOwner = Py_None;

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxGridCellAutoWrapStringRenderer[] = {{33, 255, 1}};


static PyMethodDef methods_wxGridCellAutoWrapStringRenderer[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxGridCellAutoWrapStringRenderer_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellAutoWrapStringRenderer_Clone)},
    {SIP_MLNAME_CAST(sipName_Draw), SIP_MLMETH_CAST(meth_wxGridCellAutoWrapStringRenderer_Draw), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellAutoWrapStringRenderer_Draw)},
    {SIP_MLNAME_CAST(sipName_GetBestSize), SIP_MLMETH_CAST(meth_wxGridCellAutoWrapStringRenderer_GetBestSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellAutoWrapStringRenderer_GetBestSize)}
};

PyDoc_STRVAR(doc_wxGridCellAutoWrapStringRenderer, "GridCellAutoWrapStringRenderer()\n"
"\n"
"This class may be used to format string data in a cell.");


sipClassTypeDef sipTypeDef__grid_wxGridCellAutoWrapStringRenderer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridCellAutoWrapStringRenderer,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridCellAutoWrapStringRenderer,
        {0, 0, 1},
        3, methods_wxGridCellAutoWrapStringRenderer,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridCellAutoWrapStringRenderer,
    -1,
    -1,
    supers_wxGridCellAutoWrapStringRenderer,
    SIP_NULLPTR,
    init_type_wxGridCellAutoWrapStringRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxGridCellAutoWrapStringRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGridCellAutoWrapStringRenderer,
    cast_wxGridCellAutoWrapStringRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};