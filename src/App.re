[@react.component]
let make = () => {
  <Container fluid=true>
    <Row noGutters=true>
      <Col sm={Col.int(6)} lg={Col.obj(Col.colObj(~offset=3, ()))}>
        {React.string("obj")}
      </Col>
    </Row>
  </Container>;
};
